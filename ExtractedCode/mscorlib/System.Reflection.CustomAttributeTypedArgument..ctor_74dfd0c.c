// rea decompile_all
// name: System.Reflection.CustomAttributeTypedArgument$$.ctor
// address: 0x74dfd0c
// body: available
// range: 0x74dfd0c-0x74dffbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dff6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dffb4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dffb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_CustomAttributeTypedArgument___ctor
               (undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_095215c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fdc0);
    FUN_03f5c2a4(&DAT_091b94f0);
    FUN_03f5c2a4(&DAT_0917e4f0);
    DAT_095215c5 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Equality(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_3 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = System_Reflection_CustomAttributeTypedArgument__CanonicalizeValue(param_3);
    }
    puVar10 = param_1 + 1;
    *puVar10 = uVar4;
    thunk_FUN_03f5d7b8(puVar10);
    *param_1 = param_2;
    thunk_FUN_03f5d7b8(param_1,param_2);
    if (param_3 != (long *)0x0) {
      if ((*(byte *)(DAT_09535478 + 0x130) <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) ==
          DAT_09535478)) {
        plVar5 = (long *)System_Object__GetType(param_3,0);
        if (plVar5 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
          uVar2 = System_Array__GetLength(param_3,0,0);
          lVar6 = FUN_03f5c394(DAT_0917fdc0,uVar2);
          if (lVar6 != 0) {
            if (0 < *(int *)(lVar6 + 0x18)) {
              uVar3 = 0;
              puVar11 = (undefined8 *)(lVar6 + 0x20);
              do {
                lVar7 = System_Array__GetValue(param_3,uVar3 & 0xffffffff,0);
                lVar1 = DAT_095353e8;
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_095354b8);
                }
                uVar8 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
                uVar9 = System_Type__op_Equality(uVar4,uVar8,0);
                uVar8 = uVar4;
                if (((uVar9 & 1) != 0) && (lVar7 != 0)) {
                  uVar8 = System_Object__GetType(lVar7,0);
                }
                local_60 = 0;
                uStack_58 = 0;
                System_Reflection_CustomAttributeTypedArgument___ctor(&local_60,uVar8,lVar7);
                if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                puVar11[1] = uStack_58;
                *puVar11 = local_60;
                thunk_FUN_03f5d7b8(puVar11,0);
                uVar3 = uVar3 + 1;
                puVar11 = puVar11 + 2;
              } while ((long)uVar3 < (long)*(int *)(lVar6 + 0x18));
            }
            uVar4 = thunk_FUN_03f9944c(DAT_0917e4f0);
            FUN_05ed6af0(uVar4,lVar6,DAT_091b94f0);
            *puVar10 = uVar4;
            thunk_FUN_03f5d7b8(puVar10,uVar4);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar4 = thunk_FUN_03f9944c();
  uVar8 = thunk_FUN_03fc39d4(&DAT_092179a0);
  System_ArgumentNullException___ctor(uVar4,uVar8,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c6e40);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar8);
}

