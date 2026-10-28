// rea decompile_all
// name: FUN_03fa2d74
// address: 0x3fa2d74
// body: available
// range: 0x3fa2d74-0x3fa2e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa2d74(void *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  auVar2 = FUN_03fa299c();
  lVar1 = auVar2._0_8_;
  if (lVar1 == -1) {
    FUN_03fa3a64(&local_68,param_2,param_3,auVar2._8_8_);
    memcpy(param_1,&local_68,0x48);
  }
  else {
    FUN_03f6030c(&local_88,param_2 + 0x40,lVar1);
    local_40 = *(undefined8 *)(param_2 + 0x40);
    uStack_38 = *(undefined8 *)(param_2 + 0x48);
    uStack_58 = uStack_80;
    local_60 = local_88;
    uStack_48 = uStack_70;
    uStack_50 = local_78;
    uStack_28 = 0;
    local_68 = param_2;
    local_30 = uStack_38;
    FUN_03fa2b50(&local_68);
    memcpy(param_1,&local_68,0x48);
  }
  *(bool *)((long)param_1 + 0x48) = lVar1 == -1;
  return;
}

