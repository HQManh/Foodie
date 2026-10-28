// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$AddAnnotation
// address: 0x76eff1c
// body: available
// range: 0x76eff1c-0x76f0173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f0114 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76f0118 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0124 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f016c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f0170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JToken__AddAnnotation(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long *local_28;
  
  if ((DAT_095228a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0600);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_095228a4 = 1;
  }
  local_28 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092176b8);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d13c8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  plVar7 = (long *)(param_1 + 0x28);
  if (*plVar7 == 0) {
    lVar9 = thunk_FUN_03f99350(param_2,DAT_09180318);
    if (lVar9 == 0) goto LAB_076f00fc;
    plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar1 == (long *)0x0) goto LAB_076f0170;
    lVar9 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar1 + 0x40));
    if (lVar9 == 0) goto LAB_076f011c;
    if ((int)plVar1[3] == 0) goto LAB_076f0118;
    plVar3 = plVar1 + 4;
    *plVar3 = (long)param_2;
  }
  else {
    local_28 = (long *)thunk_FUN_03f99350(*plVar7,DAT_09180318);
    if (local_28 != (long *)0x0) {
      uVar6 = (uint)local_28[3];
      if ((int)uVar6 < 1) {
        lVar9 = 0;
LAB_076f0080:
        uVar8 = (uint)lVar9;
        if (uVar8 == uVar6) goto LAB_076f0088;
      }
      else {
        lVar9 = 0;
        do {
          if (local_28[lVar9 + 4] == 0) goto LAB_076f0080;
          lVar9 = lVar9 + 1;
          uVar8 = uVar6;
        } while (uVar6 != (uint)lVar9);
LAB_076f0088:
        FUN_0492e500(&local_28,uVar6 << 1,DAT_091c0600);
        *plVar7 = (long)local_28;
        thunk_FUN_03f5d7b8(plVar7);
        if (local_28 == (long *)0x0) {
LAB_076f0170:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      plVar7 = local_28;
      lVar9 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*local_28 + 0x40));
      if (lVar9 != 0) {
        if (uVar8 < *(uint *)(plVar7 + 3)) {
          plVar7 = plVar7 + (long)(int)uVar8 + 4;
          *plVar7 = (long)param_2;
          thunk_FUN_03f5d7b8(plVar7,param_2);
          return;
        }
LAB_076f0118:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
LAB_076f011c:
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    plVar1 = (long *)FUN_03f5c394(DAT_09180318,2);
    if (plVar1 == (long *)0x0) goto LAB_076f0170;
    lVar9 = *plVar7;
    if ((lVar9 != 0) &&
       (lVar2 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
    goto LAB_076f011c;
    if ((int)plVar1[3] == 0) goto LAB_076f0118;
    plVar1[4] = lVar9;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar9);
    lVar9 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar1 + 0x40));
    if (lVar9 == 0) goto LAB_076f011c;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) == 0) goto LAB_076f0118;
    plVar3 = plVar1 + 5;
    *plVar3 = (long)param_2;
  }
  thunk_FUN_03f5d7b8(plVar3,param_2);
  param_2 = plVar1;
LAB_076f00fc:
  *plVar7 = (long)param_2;
  thunk_FUN_03f5d7b8(plVar7,param_2);
  return;
}

