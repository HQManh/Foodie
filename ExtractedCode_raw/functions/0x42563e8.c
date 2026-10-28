// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder$$ApplyWeather
// address: 0x42563e8
// body: available
// range: 0x42563e8-0x4256607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4256558 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4256604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder__ApplyWeather(float param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_34;
  
  if ((DAT_09516f28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918cf58);
    FUN_03f5c2a4(&DAT_09213b28);
    DAT_09516f28 = 1;
  }
  lVar2 = DAT_09188ad0;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0xcc) = param_3;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_2 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = CakeOrder_DataSO_WeatherAudioProfileSO__Get(*(long *)(param_2 + 0xc0),param_3,0);
      if (lVar2 == 0) {
        local_34 = param_3;
        uVar5 = FUN_03f5c42c(DAT_0918cf58,&local_34);
        uVar5 = System_String__Format(DAT_09213b28,uVar5,0);
        uVar3 = *(undefined8 *)(param_2 + 0xc0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar5,uVar3,0);
      }
      else {
        if (param_1 < 0.0) {
          param_1 = *(float *)(param_2 + 200);
        }
        plVar4 = (long *)(param_2 + 0xd0);
        if (*plVar4 != 0) {
          UnityEngine_MonoBehaviour__StopCoroutine(param_2,*plVar4,0);
          *(undefined8 *)(param_2 + 0xd0) = 0;
          thunk_FUN_03f5d7b8(plVar4,0);
        }
        if (((*(char *)(param_2 + 0xe0) != '\0') && (0.0 < param_1)) &&
           (uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_2,0), (uVar1 & 1) != 0)) {
          uVar5 = CakeOrder_AudioManagerCakeOrder__IEBlendWeather
                            (param_1,param_2,*(undefined8 *)(param_2 + 0xd8),lVar2);
          uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(param_2,uVar5,0);
          *(undefined8 *)(param_2 + 0xd0) = uVar5;
          thunk_FUN_03f5d7b8(plVar4);
          return;
        }
        CakeOrder_AudioManagerCakeOrder__WriteWeather(param_2,lVar2);
        *(long *)(param_2 + 0xd8) = lVar2;
        thunk_FUN_03f5d7b8((long *)(param_2 + 0xd8),lVar2);
        *(undefined1 *)(param_2 + 0xe0) = 1;
      }
    }
  }
  return;
}

