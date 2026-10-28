// rea decompile_all
// name: PlatformServiceR1.GooglePlayAuthBackend.<>c__DisplayClass5_0$$<SignInAsync>b__0
// address: 0x772e7b0
// body: available
// range: 0x772e7b0-0x772e96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772e958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772e95c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x772e968 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_GooglePlayAuthBackend_<>c__DisplayClass5_0__<SignInAsync>b__0
               (long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int local_34;
  
  if ((DAT_09522a5d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918abc8);
    FUN_03f5c2a4(&DAT_091bdca8);
    FUN_03f5c2a4(&DAT_09203788);
    DAT_09522a5d = 1;
  }
  if (DAT_09522a98 == '\0') {
    FUN_03f5c2a4(&DAT_091891d8);
    DAT_09522a98 = '\x01';
  }
  lVar6 = **(long **)(DAT_091891d8 + 0xb8);
  if (lVar6 != 0) {
    plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
    local_34 = param_2;
    lVar2 = FUN_03f5c42c(DAT_0918abc8,&local_34);
    if (plVar1 == (long *)0x0) goto LAB_0772e958;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    EssentialSystemR1_R1Logger__LogFormat(lVar6,DAT_09203788,plVar1,0);
  }
  if (param_2 == 2) {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      uVar4 = 1;
LAB_0772e938:
      FUN_0643acbc(lVar6,uVar4,DAT_091bdca8);
      return;
    }
  }
  else if (param_2 == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar6 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
    if ((lVar6 != 0) && (uVar4 = GooglePlayGames_PlayGamesPlatform__GetUserId(lVar6,0), lVar2 != 0))
    {
      puVar5 = (undefined8 *)(lVar2 + 0x10);
      *puVar5 = uVar4;
      thunk_FUN_03f5d7b8(puVar5,uVar4);
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != 0) {
        uVar4 = 0;
        goto LAB_0772e938;
      }
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 != 0) {
      uVar4 = 2;
      goto LAB_0772e938;
    }
  }
LAB_0772e958:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

