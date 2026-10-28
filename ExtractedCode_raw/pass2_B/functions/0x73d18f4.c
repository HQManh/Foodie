// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo$$.ctor
// address: 0x73d18f4
// body: available
// range: 0x73d18f4-0x73d1aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d1ae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d1aec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_ObjectSerializationInfo___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,byte param_5,
               undefined8 param_6,byte param_7)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  if ((DAT_09520ccd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9590);
    FUN_03f5c2a4(&DAT_091794d0);
    FUN_03f5c2a4(&DAT_091ede40);
    FUN_03f5c2a4(&DAT_09192e60);
    DAT_09520ccd = 1;
  }
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),param_2);
  puVar5 = (undefined8 *)(param_1 + 0x28);
  *puVar5 = param_3;
  thunk_FUN_03f5d7b8(puVar5,param_3);
  *(long *)(param_1 + 0x30) = param_4;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x30),param_4);
  *(undefined8 *)(param_1 + 0x20) = param_6;
  *(byte *)(param_1 + 0x19) = param_5 & 1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),param_6);
  *(byte *)(param_1 + 0x18) = param_7 & 1;
  if (param_4 != 0) {
    if (0 < *(int *)(param_4 + 0x18)) {
      uVar8 = 0;
      do {
        lVar1 = thunk_FUN_03f9944c(DAT_09192e60);
        System_Object___ctor(lVar1,0);
        if (*(uint *)(param_4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar1 == 0) goto LAB_073d1ae8;
        plVar6 = (long *)(lVar1 + 0x10);
        *plVar6 = *(long *)(param_4 + 0x20 + uVar8 * 8);
        thunk_FUN_03f5d7b8(plVar6);
        if ((*plVar6 != 0) &&
           (uVar2 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_IsInitOnly(),
           (uVar2 & 1) != 0)) {
          if (*plVar6 == 0) goto LAB_073d1ae8;
          plVar3 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                                     ();
          if (plVar3 != (long *)0x0) {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0))
            ;
            if (plVar3 != (long *)0x0) {
              uVar2 = (**(code **)(*plVar3 + 0x3d8))(plVar3,*(undefined8 *)(*plVar3 + 0x3e0));
              if ((uVar2 & 1) != 0) {
                uVar7 = *puVar5;
                uVar4 = thunk_FUN_03f9944c(DAT_091794d0);
                FUN_05322d94(uVar4,lVar1,DAT_091ede40,0);
                uVar2 = FUN_04ab6f28(uVar7,uVar4,DAT_091c9590);
                if ((uVar2 & 1) == 0) {
                  if (*plVar6 == 0) goto LAB_073d1ae8;
                  *(undefined1 *)(*plVar6 + 0x29) = 1;
                }
              }
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(param_4 + 0x18));
    }
    return;
  }
LAB_073d1ae8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

