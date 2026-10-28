// rea decompile_all
// name: System.DateTimeParse$$ParseTimeZoneOffset
// address: 0x75a876c
// body: available
// range: 0x75a876c-0x75a895f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__ParseTimeZoneOffset(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 local_48;
  uint local_3c;
  uint local_38;
  char local_34 [4];
  
  if ((DAT_09521c61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918db18);
    FUN_03f5c2a4(&DAT_091f9f58);
    DAT_09521c61 = 1;
  }
  local_3c = 0;
  local_38 = 0;
  local_34[0] = '\x01';
  if (param_2 - 1U < 2) {
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTimeParse__ParseSign(param_1,local_34);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = &local_38;
  }
  else {
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTimeParse__ParseSign(param_1,local_34);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_DateTimeParse__ParseDigits(param_1,1,&local_38);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System___DTString__Match(param_1,DAT_091f9f58,0);
    lVar1 = DAT_091835a8;
    if ((uVar2 & 1) == 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = &local_3c;
    param_2 = 2;
  }
  uVar2 = System_DateTimeParse__ParseDigits(param_1,param_2,puVar4);
  if (((uVar2 & 1) != 0) && (local_3c < 0x3c)) {
    local_48 = 0;
    System_TimeSpan___ctor(&local_48,local_38,local_3c,0,0);
    *param_3 = local_48;
    if (local_34[0] == '\0') {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_TimeSpan__Negate(param_3,0);
      *param_3 = uVar3;
      return 1;
    }
    return 1;
  }
  return 0;
}

