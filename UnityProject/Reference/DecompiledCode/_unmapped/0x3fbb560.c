// rea decompile_all
// name: FUN_03fbb560
// address: 0x3fbb560
// body: available
// range: 0x3fbb560-0x3fbb6bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbb560(char *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *local_70;
  size_t sStack_68;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  byte local_48 [8];
  ulong local_40;
  void *local_38;
  void *local_30;
  ulong uStack_28;
  
  FUN_03f8fb50(local_60);
  local_70 = "Metadata";
  sStack_68 = 8;
  uStack_28 = (ulong)(local_60[0] >> 1);
  local_30 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    uStack_28 = local_58;
    local_30 = local_50;
  }
  FUN_03f67944(local_48,&local_30,&local_70);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  sStack_68 = strlen(param_1);
  uStack_28 = (ulong)(local_48[0] >> 1);
  local_30 = (void *)((ulong)local_48 | 1);
  if ((local_48[0] & 1) != 0) {
    uStack_28 = local_40;
    local_30 = local_38;
  }
  local_70 = param_1;
  FUN_03f67944(local_60,&local_30,&local_70);
  local_30 = (void *)((ulong)local_30 & 0xffffffff00000000);
  uVar2 = FUN_03f8d45c(local_60,3,1,1,0,&local_30);
  if ((int)local_30 == 0) {
    uVar3 = FUN_03f9197c();
    FUN_03f8d6ac(uVar2,&local_30);
    if ((int)local_30 == 0) goto LAB_03fbb688;
    FUN_03f9198c(uVar3);
  }
  else {
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
    FUN_03f917fc("ERROR: Could not open %s",pvVar1);
  }
  uVar3 = 0;
LAB_03fbb688:
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  return uVar3;
}

