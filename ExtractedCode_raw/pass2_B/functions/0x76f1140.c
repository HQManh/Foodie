// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken.<Annotations>d__186$$MoveNext
// address: 0x76f1140
// body: available
// range: 0x76f1140-0x76f1343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f12b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f133c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1340 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_Linq_JToken_<Annotations>d__186__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_095228ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_095228ab = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  if (iVar1 == 2) {
    uVar5 = 0xffffffff;
LAB_076f1328:
    *(undefined4 *)(param_1 + 0x10) = uVar5;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_076f12ec;
    }
    if (iVar1 != 0) {
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Equality(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar7 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09224510);
      System_ArgumentNullException___ctor(uVar7,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091ebf00);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar4);
    }
    if (lVar10 == 0) goto LAB_076f133c;
    lVar8 = *(long *)(lVar10 + 0x28);
    if (lVar8 != 0) {
      lVar3 = thunk_FUN_03f99350(lVar8,DAT_09180318);
      uVar7 = DAT_09180318;
      plVar9 = (long *)(param_1 + 0x40);
      *plVar9 = lVar3;
      uVar7 = thunk_FUN_03f99350(lVar8,uVar7);
      uVar2 = thunk_FUN_03f5d7b8(plVar9,uVar7);
      lVar8 = *plVar9;
      if (lVar8 != 0) {
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        while (lVar8 != 0) {
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar6) goto LAB_076f12b4;
          if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558(uVar2);
          }
          lVar10 = *(long *)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_076f12b4;
          plVar9 = *(long **)(param_1 + 0x28);
          if (plVar9 == (long *)0x0) break;
          uVar2 = (**(code **)(*plVar9 + 0x8d8))(plVar9,lVar10,*(undefined8 *)(*plVar9 + 0x8e0));
          if ((uVar2 & 1) != 0) {
            *(long *)(param_1 + 0x18) = lVar10;
            thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),lVar10);
            uVar5 = 1;
            uVar2 = 1;
            goto LAB_076f1328;
          }
LAB_076f12ec:
          uVar6 = *(int *)(param_1 + 0x48) + 1;
          lVar8 = *(long *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x48) = uVar6;
        }
LAB_076f133c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar9 = *(long **)(param_1 + 0x28);
      if (plVar9 == (long *)0x0) goto LAB_076f133c;
      uVar2 = (**(code **)(*plVar9 + 0x8d8))
                        (plVar9,*(undefined8 *)(lVar10 + 0x28),*(undefined8 *)(*plVar9 + 0x8e0));
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar10 + 0x28);
        thunk_FUN_03f5d7b8();
        uVar2 = 1;
        uVar5 = 2;
        goto LAB_076f1328;
      }
    }
LAB_076f12b4:
    uVar2 = 0;
  }
  return uVar2;
}

