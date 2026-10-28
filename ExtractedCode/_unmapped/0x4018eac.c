// rea decompile_all
// name: FUN_04018eac
// address: 0x4018eac
// body: available
// range: 0x4018eac-0x401914f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04018eac(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar6;
  ulong uVar5;
  
  *param_1 = &UNK_08faab28;
  param_1[1] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[2] = param_1 + 5;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[3] = param_1 + 0x23;
  param_1[4] = param_1 + 0x23;
  FUN_04013918(param_1 + 0x24,param_2 + 0x24,param_3 + 0x120,param_4);
  if (param_1 != param_2) {
    FUN_0402c22c(param_1 + 2,param_2[2],param_2[3],(long)(param_2[3] - param_2[2]) >> 3);
  }
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  if (lVar2 != lVar3) {
    uVar5 = 0;
    uVar6 = 1;
    do {
      lVar4 = *(long *)(lVar3 + uVar5 * 8);
      if (lVar4 != 0) {
        FUN_0404bff0(1,lVar4 + 8);
        lVar3 = param_1[2];
        lVar2 = param_1[3];
      }
      bVar1 = uVar6 < (ulong)(lVar2 - lVar3 >> 3);
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
  }
  if ((param_4 >> 3 & 1) != 0) {
    FUN_0401923c(param_1,param_3);
    FUN_04019380(param_1,param_3);
  }
  if ((param_4 & 1) != 0) {
    FUN_040194c4(param_1,param_3);
    FUN_04019608(param_1,param_3);
    FUN_0401974c(param_1,param_3);
    FUN_04019890(param_1,param_3);
    FUN_040199d4(param_1,param_3);
    FUN_04019b18(param_1,param_3);
    FUN_04019c5c(param_1,param_3);
    FUN_04019da0(param_1,param_3);
  }
  if ((param_4 >> 4 & 1) != 0) {
    FUN_04019ee4(param_1,param_3);
    FUN_0401a028(param_1,param_3);
    FUN_0401a16c(param_1,param_3);
    FUN_0401a2b0(param_1,param_3);
    FUN_0401a3f4(param_1,param_3);
    FUN_0401a538(param_1,param_3);
    FUN_0401a67c(param_1,param_3);
    FUN_0401a7c0(param_1,param_3);
  }
  if ((param_4 >> 1 & 1) != 0) {
    FUN_0401a904(param_1,param_3);
    FUN_0401aa48(param_1,param_3);
    FUN_0401ab8c(param_1,param_3);
    FUN_0401acd0(param_1,param_3);
    FUN_0401ae14(param_1,param_3);
    FUN_0401af58(param_1,param_3);
  }
  if ((param_4 >> 2 & 1) != 0) {
    FUN_0401b09c(param_1,param_3);
    FUN_0401b1e0(param_1,param_3);
    FUN_0401b324(param_1,param_3);
    FUN_0401b468(param_1,param_3);
  }
  if ((param_4 >> 5 & 1) != 0) {
    FUN_0401b5ac(param_1,param_3);
    FUN_0401b6f0(param_1,param_3);
  }
  return;
}

