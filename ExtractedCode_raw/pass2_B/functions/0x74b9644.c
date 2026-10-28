// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectMap$$.ctor
// address: 0x74b9644
// body: available
// range: 0x74b9644-0x74b987f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b9854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b9870 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b987c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectMap___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
               undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long local_48;
  
  if ((DAT_09521454 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc30);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521454 = 1;
  }
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),param_4);
  *(long *)(param_1 + 0x50) = param_5;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x50),param_5);
  *(undefined8 *)(param_1 + 0x60) = param_7;
  *(undefined4 *)(param_1 + 0x58) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),param_7);
  if (param_5 != 0) {
    lVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__CreateReadObjectInfo
                      (param_5,param_3);
    plVar7 = (long *)(param_1 + 0x40);
    *plVar7 = lVar2;
    thunk_FUN_03f5d7b8(plVar7,lVar2);
    if (*plVar7 != 0) {
      lVar2 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberTypes
                        (*plVar7,param_4,param_3);
      plVar7 = (long *)(param_1 + 0x30);
      *plVar7 = lVar2;
      thunk_FUN_03f5d7b8(plVar7,lVar2);
      if (*plVar7 != 0) {
        lVar2 = FUN_03f5c394(DAT_0917fc30,*(undefined4 *)(*plVar7 + 0x18));
        plVar6 = (long *)(param_1 + 0x20);
        *plVar6 = lVar2;
        thunk_FUN_03f5d7b8(plVar6,lVar2);
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar3 = FUN_03f5c394(DAT_09180318,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
          puVar5 = (undefined8 *)(param_1 + 0x28);
          *puVar5 = uVar3;
          thunk_FUN_03f5d7b8(puVar5,uVar3);
          lVar2 = *(long *)(param_1 + 0x30);
          if (lVar2 != 0) {
            lVar8 = 8;
            lVar9 = 0x20;
            do {
              uVar10 = lVar8 - 8;
              if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar10) {
                return;
              }
              local_48 = 0;
              if (*(uint *)(lVar2 + 0x18) <= uVar10) {
LAB_074b9870:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar1 = System_Runtime_Serialization_Formatters_Binary_BinaryConverter__GetParserBinaryTypeInfo
                                (*(undefined8 *)(lVar2 + lVar9),&local_48);
              lVar2 = local_48;
              lVar4 = *plVar6;
              if (lVar4 == 0) break;
              if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_074b9870;
              plVar11 = (long *)*puVar5;
              *(undefined4 *)(lVar4 + lVar8 * 4) = uVar1;
              if (plVar11 == (long *)0x0) break;
              if ((local_48 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(local_48,*(undefined8 *)(*plVar11 + 0x40)), lVar4 == 0)
                 ) {
                uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar3,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar10) goto LAB_074b9870;
              *(long *)((long)plVar11 + lVar9) = lVar2;
              thunk_FUN_03f5d7b8((long)plVar11 + lVar9,lVar2);
              lVar2 = *plVar7;
              lVar8 = lVar8 + 1;
              lVar9 = lVar9 + 8;
            } while (lVar2 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

