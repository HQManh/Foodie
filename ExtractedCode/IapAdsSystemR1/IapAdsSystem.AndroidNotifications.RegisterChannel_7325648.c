// rea decompile_all
// name: IapAdsSystem.AndroidNotifications$$RegisterChannel
// address: 0x7325648
// body: available
// range: 0x7325648-0x73257d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AndroidNotifications__RegisterChannel(long param_1)

{
  undefined8 uVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_095205cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181198);
    FUN_03f5c2a4(&DAT_091801c0);
    FUN_03f5c2a4(&DAT_091f39f8);
    FUN_03f5c2a4(&DAT_092004f8);
    FUN_03f5c2a4(&DAT_09202f70);
    DAT_095205cf = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(DAT_09181198 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Unity_Notifications_Android_AndroidNotificationCenter__DeleteNotificationChannel(uVar1,0);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  thunk_FUN_03f5d7b8(&local_80);
  uStack_78 = DAT_092004f8;
  thunk_FUN_03f5d7b8((ulong)&local_80 | 8);
  local_70 = DAT_09202f70;
  local_60 = CONCAT44(local_60._4_4_,3);
  thunk_FUN_03f5d7b8(&local_70);
  local_60 = CONCAT17(1,(undefined7)local_60);
  uVar1 = FUN_03f5c394(DAT_091801c0,6);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f39f8,0);
  uStack_58 = uVar1;
  thunk_FUN_03f5d7b8(&uStack_58,uVar1);
  uVar1 = local_60;
  local_60 = CONCAT17(local_60._7_1_,0x1000000000000);
  local_50 = CONCAT44(local_50._4_4_,1);
  local_60._0_6_ = CONCAT24(0x101,(int)uVar1);
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  uStack_a8 = uStack_68;
  uStack_b0 = local_70;
  uStack_98 = uStack_58;
  local_a0 = local_60;
  local_90 = local_50;
  Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel(&local_c0,0);
  return;
}

