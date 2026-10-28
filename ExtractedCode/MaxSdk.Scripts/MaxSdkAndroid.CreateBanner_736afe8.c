// rea decompile_all
// name: MaxSdkAndroid$$CreateBanner
// address: 0x736afe8
// body: available
// range: 0x736afe8-0x736b2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x736b2e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736b2e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736b2f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkAndroid__CreateBanner(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_095208f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09219cb8);
    FUN_03f5c2a4(&DAT_09219cb0);
    DAT_095208f4 = 1;
  }
  MaxSdkBase__ValidateAdUnitIdentifier(param_1,DAT_09219cb0);
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x1d) == '\0') {
      if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = **(long **)(DAT_09187f20 + 0xb8);
      plVar1 = (long *)FUN_03f5c394(DAT_09180318,3);
      if (plVar1 == (long *)0x0) goto LAB_0736b2e8;
      if ((param_1 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
      goto LAB_0736b2ec;
      if ((int)plVar1[3] == 0) goto LAB_0736b2e4;
      plVar1[4] = param_1;
      thunk_FUN_03f5d7b8(plVar1 + 4,param_1);
      lVar2 = AdPositionExtenstion__ToSnakeCaseString(*(undefined4 *)(param_2 + 0x10));
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_0736b2ec;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) == 0) goto LAB_0736b2e4;
      plVar1[5] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar2);
      local_48[0] = *(undefined1 *)(param_2 + 0x1c);
      lVar2 = FUN_03f5c42c(DAT_09535400,local_48);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_0736b2ec;
      if (*(uint *)(plVar1 + 3) < 3) goto LAB_0736b2e4;
      plVar4 = plVar1 + 6;
      *plVar4 = lVar2;
    }
    else {
      if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = **(long **)(DAT_09187f20 + 0xb8);
      plVar1 = (long *)FUN_03f5c394(DAT_09180318,4);
      if (plVar1 == (long *)0x0) goto LAB_0736b2e8;
      if ((param_1 != 0) &&
         (lVar2 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_0736b2ec:
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if ((int)plVar1[3] == 0) {
LAB_0736b2e4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar1[4] = param_1;
      thunk_FUN_03f5d7b8(plVar1 + 4,param_1);
      local_34 = *(undefined4 *)(param_2 + 0x14);
      lVar2 = FUN_03f5c42c(DAT_09535450,&local_34);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_0736b2ec;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffe) == 0) goto LAB_0736b2e4;
      plVar1[5] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar2);
      local_38 = *(undefined4 *)(param_2 + 0x18);
      lVar2 = FUN_03f5c42c(DAT_09535450,&local_38);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_0736b2ec;
      if (*(uint *)(plVar1 + 3) < 3) goto LAB_0736b2e4;
      plVar1[6] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 6,lVar2);
      local_44[0] = *(undefined1 *)(param_2 + 0x1c);
      lVar2 = FUN_03f5c42c(DAT_09535400,local_44);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_0736b2ec;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffc) == 0) goto LAB_0736b2e4;
      plVar4 = plVar1 + 7;
      *plVar4 = lVar2;
    }
    thunk_FUN_03f5d7b8(plVar4,lVar2);
    if (lVar6 != 0) {
      UnityEngine_AndroidJavaObject___CallStatic(lVar6,DAT_09219cb8,plVar1,0);
      return;
    }
  }
LAB_0736b2e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

