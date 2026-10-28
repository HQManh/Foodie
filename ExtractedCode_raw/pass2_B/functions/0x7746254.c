// rea decompile_all
// name: _GAME.Utils.HelperTime$$FormatTimePrettyShort
// address: 0x7746254
// body: available
// range: 0x7746254-0x77464f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Utils_HelperTime__FormatTimePrettyShort(ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong local_30;
  ulong local_28;
  
  if ((DAT_09522b20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09226818);
    FUN_03f5c2a4(&DAT_09226808);
    FUN_03f5c2a4(&DAT_092267d8);
    FUN_03f5c2a4(&DAT_09226850);
    FUN_03f5c2a4(&DAT_092267f0);
    FUN_03f5c2a4(&DAT_09226838);
    FUN_03f5c2a4(&DAT_092267d0);
    DAT_09522b20 = 1;
  }
  if ((long)param_1 < 0x3c) {
    local_28 = param_1;
    uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
    uVar2 = DAT_09226850;
LAB_077464d4:
    System_String__Format(uVar2,uVar3,0);
  }
  else {
    uVar5 = (uint)param_1;
    if (param_1 < 0xe10) {
      uVar1 = (uVar5 & 0xffff) / 0x3c;
      local_28 = (ulong)uVar1;
      uVar5 = uVar5 + uVar1 * -0x3c;
      if ((uVar5 & 0xffff) == 0) {
        uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
        puVar4 = &DAT_09226818;
        goto LAB_077464d0;
      }
      uVar2 = FUN_03f5c42c(DAT_09535440,&local_28);
      local_30 = (ulong)uVar5 & 0xffff;
      uVar3 = FUN_03f5c42c(DAT_09535440,&local_30);
      puVar4 = &DAT_09226838;
    }
    else if (param_1 >> 7 < 0x2a3) {
      local_28 = (param_1 & 0xffffffff) / 0xe10;
      uVar5 = uVar5 + (int)((param_1 & 0xffffffff) / 0xe10) * -0xe10;
      if (uVar5 == 0) {
        uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
        puVar4 = &DAT_092267f0;
        goto LAB_077464d0;
      }
      uVar2 = FUN_03f5c42c(DAT_09535440,&local_28);
      local_30 = (ulong)((uVar5 & 0xffff) / 0x3c);
      uVar3 = FUN_03f5c42c(DAT_09535440,&local_30);
      puVar4 = &DAT_09226808;
    }
    else {
      local_28 = param_1 / 0x15180;
      param_1 = param_1 - (local_28 * 0x1517f + param_1 / 0x15180);
      if (param_1 == 0) {
        uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
        puVar4 = &DAT_092267d0;
LAB_077464d0:
        uVar2 = *puVar4;
        goto LAB_077464d4;
      }
      uVar2 = FUN_03f5c42c(DAT_09535440,&local_28);
      local_30 = (param_1 & 0xffffffff) / 0xe10;
      uVar3 = FUN_03f5c42c(DAT_09535440,&local_30);
      puVar4 = &DAT_092267d8;
    }
    System_String__Format(*puVar4,uVar2,uVar3,0);
  }
  return;
}

