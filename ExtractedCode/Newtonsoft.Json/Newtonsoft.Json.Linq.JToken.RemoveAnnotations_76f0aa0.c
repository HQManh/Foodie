// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$RemoveAnnotations
// address: 0x76f0aa0
// body: available
// range: 0x76f0aa0-0x76f0cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f0c38 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f0c50 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0c54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0c60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0ca8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JToken__RemoveAnnotations(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  if ((DAT_095228a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_095228a7 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Equality(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09224510);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d13f8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  plVar8 = (long *)(param_1 + 0x28);
  if (*plVar8 == 0) {
    return;
  }
  plVar4 = (long *)thunk_FUN_03f99350(*plVar8,DAT_09180318);
  if (plVar4 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
LAB_076f0c54:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*param_2 + 0x8d8))(param_2,*plVar8,*(undefined8 *)(*param_2 + 0x8e0));
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  else {
    uVar2 = *(uint *)(plVar4 + 3);
    if (0 < (int)uVar2) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        if (uVar2 <= (uint)lVar10) goto LAB_076f0c50;
        lVar9 = plVar4[lVar10 + 4];
        if (lVar9 == 0) break;
        if (param_2 == (long *)0x0) goto LAB_076f0c54;
        uVar3 = (**(code **)(*param_2 + 0x8d8))(param_2,lVar9,*(undefined8 *)(*param_2 + 0x8e0));
        if ((uVar3 & 1) == 0) {
          lVar5 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar5 == 0) {
            uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,0);
          }
          if (*(uint *)(plVar4 + 3) <= uVar11) goto LAB_076f0c50;
          lVar5 = (long)(int)uVar11;
          lVar1 = (long)(int)uVar11;
          uVar11 = uVar11 + 1;
          plVar4[lVar5 + 4] = lVar9;
          thunk_FUN_03f5d7b8(plVar4 + lVar1 + 4,lVar9);
        }
        uVar2 = *(uint *)(plVar4 + 3);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar2);
      if (uVar11 != 0) {
        if ((int)(uint)lVar10 <= (int)uVar11) {
          return;
        }
        plVar8 = plVar4 + (long)(int)uVar11 + 4;
        while (uVar11 < *(uint *)(plVar4 + 3)) {
          *plVar8 = 0;
          thunk_FUN_03f5d7b8(plVar8,0);
          uVar11 = uVar11 + 1;
          plVar8 = plVar8 + 1;
          if ((uint)lVar10 == uVar11) {
            return;
          }
        }
LAB_076f0c50:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
  *plVar8 = 0;
  thunk_FUN_03f5d7b8(plVar8,0);
  return;
}

