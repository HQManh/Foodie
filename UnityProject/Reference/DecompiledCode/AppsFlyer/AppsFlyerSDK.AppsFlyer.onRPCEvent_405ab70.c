// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer$$onRPCEvent
// address: 0x405ab70
// body: available
// range: 0x405ab70-0x405ae77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer__onRPCEvent(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09515b9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_0919fb80);
    FUN_03f5c2a4(&DAT_0919fbb0);
    FUN_03f5c2a4(&DAT_092203e0);
    FUN_03f5c2a4(&DAT_092203d8);
    FUN_03f5c2a4(&DAT_09211fb8);
    FUN_03f5c2a4(&DAT_092204b8);
    FUN_03f5c2a4(&DAT_09222388);
    FUN_03f5c2a4(&DAT_0921a200);
    FUN_03f5c2a4(&DAT_092203e8);
    FUN_03f5c2a4(&DAT_092203f0);
    FUN_03f5c2a4(&DAT_092204a0);
    FUN_03f5c2a4(&DAT_0921b1f0);
    DAT_09515b9e = 1;
  }
  if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = AppsFlyerSDK_AppsFlyer__CallbackStringToDictionary(param_2);
  if ((lVar1 != 0) && (uVar2 = FUN_06fd8648(lVar1,DAT_0921b1f0,DAT_0919fb80), (uVar2 & 1) != 0)) {
    plVar3 = (long *)FUN_06fd83d4(lVar1,DAT_0921b1f0,DAT_0919fbb0);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else if (*plVar3 != DAT_09535468) {
      plVar3 = (long *)0x0;
    }
    uVar2 = FUN_06fd8648(lVar1,DAT_0921a200,DAT_0919fb80);
    if (((uVar2 & 1) != 0) && (lVar1 = FUN_06fd83d4(lVar1,DAT_0921a200,DAT_0919fbb0), lVar1 != 0)) {
      param_2 = AFMiniJSON_Json_Serializer__Serialize();
    }
    uVar2 = System_String__op_Equality(plVar3,DAT_092203f0,0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = System_String__op_Equality(plVar3,DAT_092203e8,0), (uVar2 & 1) == 0)) {
      uVar2 = System_String__op_Equality(plVar3,DAT_092203e0,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = System_String__op_Equality(plVar3,DAT_092203d8,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = System_String__op_Equality(plVar3,DAT_09222388,0);
          if (((uVar2 & 1) == 0) &&
             (uVar2 = System_String__op_Equality(plVar3,DAT_092204b8,0), (uVar2 & 1) == 0)) {
            uVar4 = System_String__Concat(DAT_09211fb8,plVar3,0);
            if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AppsFlyerSDK_AppsFlyer__AFLog(DAT_092204a0,uVar4);
          }
          else {
            AppsFlyerSDK_AppsFlyer__onSessionReadyReceived(uVar2,param_2);
          }
        }
        else {
          if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar1 = *(long *)(*(long *)(DAT_091814e8 + 0xb8) + 0x20);
          if (lVar1 != 0) {
            (**(code **)(lVar1 + 0x18))
                      (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
          }
        }
      }
      else {
        if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = *(long *)(*(long *)(DAT_091814e8 + 0xb8) + 0x18);
        if (lVar1 != 0) {
          (**(code **)(lVar1 + 0x18))
                    (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
        }
      }
    }
    else {
      AppsFlyerSDK_AppsFlyer__onDeepLinking(uVar2,param_2);
    }
  }
  return;
}

