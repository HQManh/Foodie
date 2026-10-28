// rea decompile_all
// name: EssentialSystemR1.PlayTimeTracker$$OnApplicationQuit
// address: 0x4582508
// body: available
// range: 0x4582508-0x458250b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_PlayTimeTracker__OnApplicationQuit(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uStack_28;
  
  if ((DAT_09518943 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0920a990);
    FUN_03f5c2a4(&DAT_09210b98);
    DAT_09518943 = 1;
  }
  uStack_28 = 0;
  fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  *(double *)(param_1 + 0x20) =
       *(double *)(param_1 + 0x20) + (double)(fVar5 - *(float *)(param_1 + 0x28));
  uVar6 = UnityEngine_Time__get_realtimeSinceStartup(0);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  uVar1 = System_Double__ToString(&uStack_28,0);
  UnityEngine_PlayerPrefs__SetString(DAT_09210b98,uVar1,0);
  UnityEngine_PlayerPrefs__Save(0);
  plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
  lVar3 = EssentialSystemR1_PlayTimeTracker__FormatTime(*(undefined8 *)(param_1 + 0x20));
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,0);
    }
    if ((int)plVar2[3] != 0) {
      plVar2[4] = lVar3;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogFormat(DAT_0920a990,plVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

