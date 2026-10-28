// rea decompile_all
// name: Newtonsoft.Json.Converters.KeyValuePairConverter$$ReadJson
// address: 0x77090a8
// body: available
// range: 0x77090a8-0x770957f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7709534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7709538 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7709544 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770957c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_KeyValuePairConverter__ReadJson
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  
  if ((DAT_09522973 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185890);
    FUN_03f5c2a4(&DAT_09187528);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091bd410);
    FUN_03f5c2a4(&DAT_09212b98);
    FUN_03f5c2a4(&DAT_09206568);
    DAT_09522973 = 1;
  }
  if (param_2 != (long *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 == 0xb) {
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar6 = thunk_FUN_03fc39d4(&DAT_091fdb58);
        uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar6,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091d2058);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      return 0;
    }
    Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3,0);
    if ((uVar2 & 1) != 0) {
      param_3 = System_Nullable__GetUnderlyingType(param_3,0);
    }
    if (*(int *)(DAT_09187528 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((((**(long **)(DAT_09187528 + 0xb8) != 0) &&
         (lVar3 = FUN_06361088(**(long **)(DAT_09187528 + 0xb8),param_3,DAT_091bd410),
         param_5 != (long *)0x0)) &&
        (plVar4 = (long *)(**(code **)(*param_5 + 0x3a8))(param_5,*(undefined8 *)(*param_5 + 0x3b0))
        , lVar3 != 0)) &&
       (uVar6 = Newtonsoft_Json_Utilities_ReflectionObject__GetType(lVar3,DAT_09206568,0),
       plVar4 != (long *)0x0)) {
      lVar8 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185890) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077092b4;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185890,0);
LAB_077092b4:
      lVar8 = (*(code *)*puVar5)(plVar4,uVar6,puVar5[1]);
      plVar4 = (long *)(**(code **)(*param_5 + 0x3a8))(param_5,*(undefined8 *)(*param_5 + 0x3b0));
      uVar6 = Newtonsoft_Json_Utilities_ReflectionObject__GetType(lVar3,DAT_09212b98,0);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar2 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185890) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0770934c;
            }
            uVar2 = uVar2 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185890,0);
LAB_0770934c:
        lVar9 = (*(code *)*puVar5)(plVar4,uVar6,puVar5[1]);
        iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar1 == 4) {
          lVar12 = 0;
          lVar11 = 0;
          do {
            plVar4 = (long *)(**(code **)(*param_2 + 0x248))
                                       (param_2,*(undefined8 *)(*param_2 + 0x250));
            if (plVar4 == (long *)0x0) goto LAB_07709534;
            uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            uVar2 = System_String__Equals(uVar6,DAT_09206568,5,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = System_String__Equals(uVar6,DAT_09212b98,5,0);
              if ((uVar2 & 1) == 0) {
                Newtonsoft_Json_JsonReader__Skip(param_2,0);
              }
              else {
                Newtonsoft_Json_JsonReader__ReadForTypeAndAssert(param_2,lVar9,0,0);
                if (lVar9 == 0) goto LAB_07709534;
                lVar11 = Newtonsoft_Json_JsonSerializer__Deserialize
                                   (param_5,param_2,*(undefined8 *)(lVar9 + 0x60),0);
              }
            }
            else {
              Newtonsoft_Json_JsonReader__ReadForTypeAndAssert(param_2,lVar8,0,0);
              if (lVar8 == 0) goto LAB_07709534;
              lVar12 = Newtonsoft_Json_JsonSerializer__Deserialize
                                 (param_5,param_2,*(undefined8 *)(lVar8 + 0x60),0);
            }
            Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
            iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
          } while (iVar1 == 4);
        }
        else {
          lVar11 = 0;
          lVar12 = 0;
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        plVar4 = (long *)FUN_03f5c394(DAT_09180318,2);
        if (plVar4 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
LAB_0770953c:
            uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,0);
          }
          if ((int)plVar4[3] != 0) {
            plVar4[4] = lVar12;
            thunk_FUN_03f5d7b8(plVar4 + 4,lVar12);
            if ((lVar11 != 0) &&
               (lVar8 = thunk_FUN_03f99350(lVar11,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0))
            goto LAB_0770953c;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
              plVar4[5] = lVar11;
              thunk_FUN_03f5d7b8(plVar4 + 5,lVar11);
              if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07709530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar6 = (**(code **)(lVar3 + 0x18))
                                  (*(undefined8 *)(lVar3 + 0x40),plVar4,
                                   *(undefined8 *)(lVar3 + 0x28));
                return uVar6;
              }
              goto LAB_07709534;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
  }
LAB_07709534:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

