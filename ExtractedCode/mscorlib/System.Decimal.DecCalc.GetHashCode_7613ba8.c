// rea decompile_all
// name: System.Decimal.DecCalc$$GetHashCode
// address: 0x7613ba8
// body: available
// range: 0x7613ba8-0x7613cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Decimal_DecCalc__GetHashCode(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_095220c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_095220c4 = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = param_1[2];
  if ((param_1[3] == 0 && param_1[1] == 0) && uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *param_1;
    if ((uVar1 & 0xff0000) != 0) {
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424();
        uVar2 = param_1[2];
      }
      if ((uVar2 & 1) == 0) {
        local_28 = CONCAT44(uVar1 >> 0x10,(uint)local_28) & 0xffffffffff;
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar2 = param_1[2];
        }
        local_30._0_4_ = param_1[3];
        local_30._4_4_ = param_1[1];
        local_28._0_4_ = uVar2;
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0762357c(&local_28,&local_30,(long)&local_28 + 4,0);
        return (uVar1 & 0xff00ffff | local_28._4_4_ << 0x10) ^
               (uint)local_30 ^ (uint)local_28 ^ local_30._4_4_;
      }
    }
    if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar2 = param_1[2];
    }
    uVar2 = param_1[1] ^ param_1[3] ^ uVar2 ^ uVar1;
  }
  return uVar2;
}

