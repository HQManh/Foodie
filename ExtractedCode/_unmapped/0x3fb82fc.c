// rea decompile_all
// name: FUN_03fb82fc
// address: 0x3fb82fc
// body: available
// range: 0x3fb82fc-0x3fb843b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb8438 to 0x3f984c8 FUN_03f984c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fb82fc(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  
  lVar2 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
  lVar4 = 0x1a0;
  if ((param_2 & 1) == 0) {
    lVar4 = 0xe0;
  }
  uVar6 = *(undefined8 *)((long)&DAT_095353d8 + lVar4);
  uVar3 = FUN_03fbf77c();
  if ((uVar3 & 1) == 0) {
    if (*(long *)(lVar2 + 0x60) == 0) {
      lVar4 = FUN_03f984c8(uVar6,0);
      return lVar4;
    }
    puVar7 = *(uint **)(*(long *)(lVar2 + 0x60) + 8);
    lVar4 = FUN_03f984c8(uVar6,*puVar7);
    if (*puVar7 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        uVar6 = FUN_03f9ab74(*(undefined8 *)(*(long *)(puVar7 + 2) + lVar2));
        *(undefined8 *)(lVar4 + 0x20 + lVar2) = uVar6;
        FUN_03f5d7b8(lVar4 + 0x20 + lVar2);
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 8;
      } while (uVar3 < *puVar7);
    }
  }
  else {
    uVar1 = thunk_FUN_03fac998(*(undefined8 *)(lVar2 + 0xf0));
    lVar4 = FUN_03f984c8(uVar6,(ulong)uVar1);
    if (uVar1 != 0) {
      uVar3 = 0;
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        thunk_FUN_03fac7e4(*(undefined8 *)(lVar2 + 0xf0),(uint)uVar3 & 0xffff);
        lVar5 = FUN_03fbe828();
        uVar6 = FUN_03f9ab74(lVar5 + 0x20);
        *puVar8 = uVar6;
        FUN_03f5d7b8(puVar8);
        uVar3 = uVar3 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar1 != uVar3);
    }
  }
  return lVar4;
}

