// rea decompile_all
// name: FUN_03fd1308
// address: 0x3fd1308
// body: available
// range: 0x3fd1308-0x3fd149b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd1308(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    plVar5 = (long *)(&DAT_097440c8 + ((ulong)param_1 >> 0x16 & 0x7ff) * 8);
    do {
      lVar4 = *plVar5;
      plVar5 = (long *)(lVar4 + 0x2018);
    } while (*(ulong *)(lVar4 + 0x2010) != (ulong)param_1 >> 0x16 && lVar4 != DAT_09535c90);
    lVar4 = *(long *)(lVar4 + ((ulong)param_1 >> 0xc & 0x3ff) * 8);
    uVar6 = *(ulong *)(lVar4 + 0x20);
    bVar1 = *(byte *)(lVar4 + 0x18);
    if (uVar6 < 0x810) {
      if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
        FUN_03fcbfa4();
      }
      DAT_09535c40 = DAT_09535c40 + uVar6;
      if (bVar1 == 2) {
        DAT_09748520 = DAT_09748520 - uVar6;
      }
      if ((8 < uVar6) && (*(int *)(&DAT_095156fc + (ulong)bVar1 * 0x20) != 0)) {
        memset(param_1 + 1,0,uVar6 - 8);
      }
      iVar2 = DAT_097480e0;
      puVar3 = (&PTR_DAT_095156e0)[(ulong)bVar1 * 4];
      *param_1 = *(undefined8 *)(puVar3 + (uVar6 >> 4) * 8);
      *(undefined8 **)(puVar3 + (uVar6 >> 4) * 8) = param_1;
    }
    else {
      if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
        FUN_03fcbfa4();
      }
      DAT_09535c40 = DAT_09535c40 + uVar6;
      if (bVar1 == 2) {
        DAT_09748520 = DAT_09748520 - uVar6;
      }
      if (0x1fff < uVar6 + 0xfff) {
        DAT_09535c10 = DAT_09535c10 - (uVar6 + 0xfff & 0xfffffffffffff000);
      }
      FUN_03fce454((ulong)param_1 & 0xfffffffffffff000);
      iVar2 = DAT_097480e0;
    }
    if (iVar2 != 0) {
      DAT_097480e8 = 0;
    }
  }
  return;
}

