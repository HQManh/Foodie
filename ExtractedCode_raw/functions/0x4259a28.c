// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder.<IEBlendWeather>d__147$$MoveNext
// address: 0x4259a28
// body: available
// range: 0x4259a28-0x4259b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4259b1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_AudioManagerCakeOrder_<IEBlendWeather>d__147__MoveNext(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar4 = *(float *)(param_1 + 0x3c);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar4 = 0.0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (fVar4 < *(float *)(param_1 + 0x38)) {
    fVar2 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    *(float *)(param_1 + 0x3c) = fVar4 + fVar2;
    if (lVar1 != 0) {
      fVar2 = (fVar4 + fVar2) / *(float *)(param_1 + 0x38);
      fVar4 = 1.0;
      if (fVar2 <= 1.0) {
        fVar4 = fVar2;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar2) {
        fVar3 = fVar4;
      }
      CakeOrder_AudioManagerCakeOrder__WriteWeatherBlend
                (fVar3,lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else if (lVar1 != 0) {
    CakeOrder_AudioManagerCakeOrder__WriteWeather(lVar1,*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(param_1 + 0x30);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar1 + 0xd0) = 0;
    *(undefined1 *)(lVar1 + 0xe0) = 1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xd0),0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

