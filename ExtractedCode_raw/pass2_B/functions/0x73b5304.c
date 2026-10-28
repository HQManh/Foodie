// rea decompile_all
// name: MessagePack.Internal.CodeGenHelpers$$ReadStringSpan
// address: 0x73b5304
// body: available
// range: 0x73b5304-0x73b54e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_Internal_CodeGenHelpers__ReadStringSpan(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_98;
  long lStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09520c04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_091b6938);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b9710);
    FUN_03f5c2a4(&DAT_091b9718);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091b97a8);
    DAT_09520c04 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  uVar1 = MessagePack_MessagePackReader__TryReadStringSpan(param_1,&local_30,0);
  if ((uVar1 & 1) == 0) {
    MessagePack_MessagePackReader__ReadStringSequence(&local_50,param_1,0);
    if ((char)local_50 == '\0') {
      local_30 = 0;
    }
    else {
      FUN_05c25078(&local_98,&local_50,DAT_091b6938);
      lStack_68 = lStack_90;
      local_70 = local_98;
      local_60 = local_88;
      if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (local_70 == lStack_68) {
        FUN_05c25078(&local_98,&local_50,DAT_091b6938);
        lStack_68 = lStack_90;
        local_70 = local_98;
        local_60 = local_88;
        if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_80 = FUN_05fdc42c(&local_70,DAT_091b9710);
        local_30 = FUN_04a6d544(local_80,DAT_091b9650);
      }
      else {
        FUN_05c25078(&local_98,&local_50,DAT_091b6938);
        lStack_68 = lStack_90;
        local_70 = local_98;
        local_60 = local_88;
        uVar2 = FUN_04a58db0(&local_70,DAT_091c4278);
        local_30 = FUN_05ff6120(uVar2,DAT_091b97a8);
      }
    }
  }
  return local_30;
}

