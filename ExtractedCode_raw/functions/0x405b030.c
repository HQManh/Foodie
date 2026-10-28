// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer$$.cctor
// address: 0x405b030
// body: available
// range: 0x405b030-0x405b36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405b368 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x405b36c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_09515ba1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_0919e908);
    FUN_03f5c2a4(&DAT_0919e900);
    FUN_03f5c2a4(&DAT_09176798);
    FUN_03f5c2a4(&DAT_09218b78);
    FUN_03f5c2a4(&DAT_092247d0);
    FUN_03f5c2a4(&DAT_09224178);
    FUN_03f5c2a4(&DAT_09224310);
    FUN_03f5c2a4(&DAT_091f9f10);
    FUN_03f5c2a4(&DAT_0921c770);
    FUN_03f5c2a4(&DAT_09219ff8);
    FUN_03f5c2a4(&DAT_09217888);
    FUN_03f5c2a4(&DAT_0921a780);
    FUN_03f5c2a4(&DAT_09217880);
    FUN_03f5c2a4(&DAT_09217268);
    FUN_03f5c2a4(&DAT_0921bc30);
    FUN_03f5c2a4(&DAT_0921d890);
    FUN_03f5c2a4(&DAT_09225cb8);
    FUN_03f5c2a4(&DAT_09224180);
    DAT_09515ba1 = 1;
  }
  **(undefined8 **)(DAT_091814e8 + 0xb8) = DAT_091f9f10;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091814e8 + 0xb8));
  puVar1 = (undefined8 *)(*(long *)(DAT_091814e8 + 0xb8) + 8);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  lVar2 = thunk_FUN_03f9944c(DAT_09176798);
  FUN_07065870(lVar2,DAT_0919e900);
  if (lVar2 != 0) {
    FUN_07066628(lVar2,1,DAT_0921c770,DAT_0919e908);
    FUN_07066628(lVar2,2,DAT_0921d890,DAT_0919e908);
    FUN_07066628(lVar2,3,DAT_09217880,DAT_0919e908);
    FUN_07066628(lVar2,4,DAT_0921bc30,DAT_0919e908);
    FUN_07066628(lVar2,5,DAT_09217888,DAT_0919e908);
    FUN_07066628(lVar2,6,DAT_09217268,DAT_0919e908);
    FUN_07066628(lVar2,7,DAT_09224178,DAT_0919e908);
    FUN_07066628(lVar2,8,DAT_09224310,DAT_0919e908);
    FUN_07066628(lVar2,9,DAT_09225cb8,DAT_0919e908);
    FUN_07066628(lVar2,10,DAT_09218b78,DAT_0919e908);
    FUN_07066628(lVar2,0xb,DAT_092247d0,DAT_0919e908);
    FUN_07066628(lVar2,0xc,DAT_09224180,DAT_0919e908);
    FUN_07066628(lVar2,0xd,DAT_09219ff8,DAT_0919e908);
    FUN_07066628(lVar2,0xe,DAT_0921a780,DAT_0919e908);
    plVar3 = (long *)(*(long *)(DAT_091814e8 + 0xb8) + 0x30);
    *plVar3 = lVar2;
    thunk_FUN_03f5d7b8(plVar3,lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

