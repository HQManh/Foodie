// rea decompile_all
// name: IapAdsSystem.AndroidNotifications$$Send
// address: 0x7325824
// body: available
// range: 0x7325824-0x732597b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AndroidNotifications__Send
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_2a0 [192];
  undefined1 auStack_1e0 [192];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100 [5];
  undefined8 local_d8 [15];
  
  if ((DAT_095205d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181198);
    FUN_03f5c2a4(&DAT_0921d170);
    FUN_03f5c2a4(&DAT_0921d168);
    DAT_095205d1 = 1;
  }
  memset(&local_120,0,0xc0);
  local_120 = param_3;
  thunk_FUN_03f5d7b8(&local_120,param_3);
  local_118 = param_4;
  thunk_FUN_03f5d7b8(&local_118,param_4);
  local_110 = DAT_0921d168;
  uStack_108 = param_5;
  thunk_FUN_03f5d7b8(&local_110);
  local_100[0] = DAT_0921d170;
  thunk_FUN_03f5d7b8(local_100);
  local_d8[0] = param_2;
  thunk_FUN_03f5d7b8(local_d8,param_2);
  Unity_Notifications_Android_AndroidNotification__set_ShowInForeground(&local_120,1,0);
  memcpy(auStack_1e0,&local_120,0xc0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_09181198 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  memcpy(auStack_2a0,auStack_1e0,0xc0);
  Unity_Notifications_Android_AndroidNotificationCenter__SendNotification(auStack_2a0,uVar1,0);
  return;
}

