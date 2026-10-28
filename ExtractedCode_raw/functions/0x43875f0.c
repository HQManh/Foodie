// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry$$set_SaveMeBudget
// address: 0x43875f0
// body: available
// range: 0x43875f0-0x4387707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry__set_SaveMeBudget(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_095179b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_095179b2 = 1;
  }
  if (4 < (int)param_1) {
    param_1 = 5;
  }
  param_1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(DAT_09182cc0 + 0xb8);
  iVar4 = param_1 - *(int *)(lVar6 + 0x20);
  if (iVar4 != 0) {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar6 = *(long *)(DAT_09182cc0 + 0xb8);
    }
    lVar5 = DAT_09182cc0;
    *(uint *)(lVar6 + 0x20) = param_1;
    if (DAT_09517a8c == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a8c = '\x01';
      lVar5 = DAT_09182cc0;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = DAT_09182cc0;
    }
    uVar1 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x28) + iVar4;
    uVar2 = uVar1;
    if ((int)param_1 <= (int)uVar1) {
      uVar2 = param_1;
    }
    uVar3 = 0;
    if (-1 < (int)uVar1) {
      uVar3 = uVar2;
    }
    if (DAT_09517a8d == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09517a8d = '\x01';
      lVar5 = DAT_09182cc0;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = DAT_09182cc0;
    }
    *(uint *)(*(long *)(lVar5 + 0xb8) + 0x28) = uVar3;
  }
  return;
}

