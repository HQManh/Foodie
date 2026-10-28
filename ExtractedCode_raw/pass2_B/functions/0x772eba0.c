// rea decompile_all
// name: PlatformServiceR1.GooglePlaySavedGameBackend$$OpenSlotAsync
// address: 0x772eba0
// body: available
// range: 0x772eba0-0x772ed7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772ed78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void PlatformServiceR1_GooglePlaySavedGameBackend__OpenSlotAsync
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09522a60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174d70);
    FUN_03f5c2a4(&DAT_09186538);
    FUN_03f5c2a4(&DAT_091ea6c8);
    FUN_03f5c2a4(&DAT_09190f18);
    FUN_03f5c2a4(&DAT_091bdce8);
    FUN_03f5c2a4(&DAT_091bdcf8);
    FUN_03f5c2a4(&DAT_0917f690);
    DAT_09522a60 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09190f18);
  System_Object___ctor(lVar1,0);
  lVar2 = thunk_FUN_03f9944c(DAT_0917f690);
  FUN_0643b61c(lVar2,DAT_091bdce8);
  if (lVar1 != 0) {
    plVar8 = (long *)(lVar1 + 0x10);
    *plVar8 = lVar2;
    thunk_FUN_03f5d7b8(plVar8,lVar2);
    lVar2 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
    if (lVar2 != 0) {
      plVar3 = (long *)GooglePlayGames_PlayGamesPlatform__get_SavedGame(lVar2,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09174d70);
      FUN_071cbc6c(uVar4,lVar1,DAT_091ea6c8,0);
      if (plVar3 != (long *)0x0) {
        lVar1 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09186538) {
              puVar5 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0772ed1c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186538,0);
LAB_0772ed1c:
        (*(code *)*puVar5)(plVar3,param_3,0,0,uVar4,puVar5[1]);
        if (*plVar8 != 0) {
          FUN_0643b63c(&local_58,*plVar8,DAT_091bdcf8);
          param_1[1] = uStack_50;
          *param_1 = local_58;
          param_1[2] = local_48;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

