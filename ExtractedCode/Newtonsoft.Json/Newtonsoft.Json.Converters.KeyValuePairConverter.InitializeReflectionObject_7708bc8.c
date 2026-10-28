// rea decompile_all
// name: Newtonsoft.Json.Converters.KeyValuePairConverter$$InitializeReflectionObject
// address: 0x7708bc8
// body: available
// range: 0x7708bc8-0x7708e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7708e2c to 0x7699c8c Newtonsoft.Json.Utilities.ReflectionObject$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7708e30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7708e34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7708e40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_KeyValuePairConverter__InitializeReflectionObject(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09522971 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b120);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09212b98);
    FUN_03f5c2a4(&DAT_09206568);
    DAT_09522971 = 1;
  }
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x488))(param_1,*(undefined8 *)(*param_1 + 0x490));
    if (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b120) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07708c9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917b120,0);
LAB_07708c9c:
      lVar5 = (*(code *)*puVar2)(plVar1,0,puVar2[1]);
      lVar6 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b120) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07708d04;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917b120,0);
LAB_07708d04:
      lVar6 = (*(code *)*puVar2)(plVar1,1,puVar2[1]);
      plVar1 = (long *)FUN_03f5c394(DAT_09180748,2);
      if (plVar1 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_07708e38:
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar1[3] != 0) {
          plVar1[4] = lVar5;
          thunk_FUN_03f5d7b8(plVar1 + 4,lVar5);
          if ((lVar6 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar5 == 0))
          goto LAB_07708e38;
          if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
            plVar1[5] = lVar6;
            thunk_FUN_03f5d7b8(plVar1 + 5,lVar6);
            uVar4 = System_Type__GetConstructor(param_1,plVar1,0);
            lVar5 = FUN_03f5c394(DAT_091805f8,2);
            if (lVar5 == 0) goto LAB_07708e30;
            if (*(int *)(lVar5 + 0x18) != 0) {
              *(undefined8 *)(lVar5 + 0x20) = DAT_09206568;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x20));
              if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar5 + 0x28) = DAT_09212b98;
                thunk_FUN_03f5d7b8();
                Newtonsoft_Json_Utilities_ReflectionObject__Create(param_1,uVar4,lVar5,0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_07708e30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

