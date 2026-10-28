// rea decompile_all
// name: FUN_03fb1988
// address: 0x3fb1988
// body: available
// range: 0x3fb1988-0x3fb1af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03fb1988(long param_1,int *param_2)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  lVar5 = *(long *)(param_1 + 0x58);
  bVar2 = **(byte **)(param_2 + 2);
  if (bVar2 == 0) {
    uVar8 = 0x7aa162a16fe;
  }
  else {
    uVar7 = 0x1505;
    uVar8 = 0x1505;
    pbVar3 = *(byte **)(param_2 + 2);
    do {
      uVar8 = uVar8 * 0x21 ^ (ulong)bVar2;
      if ((ulong)pbVar3[1] == 0) break;
      bVar2 = pbVar3[2];
      uVar7 = uVar7 * 0x21 ^ (ulong)pbVar3[1];
      pbVar3 = pbVar3 + 2;
    } while (bVar2 != 0);
    uVar8 = uVar8 + uVar7 * 0x5d588b65;
  }
  lVar10 = 0;
  uVar7 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 & lVar5 - 1U;
    uVar9 = uVar8 % 0x30;
    if ((*(byte *)(*(long *)(param_1 + 0x40) + (uVar8 / 0x30) * 0x10 + (uVar9 >> 3) + 10) >>
         (uVar9 & 7) & 1) == 0) {
      uVar9 = uVar8;
      if (uVar7 != 0xffffffffffffffff) {
        uVar9 = uVar7;
      }
      uVar8 = 0xffffffffffffffff;
LAB_03fb1ad4:
      auVar13._8_8_ = uVar9;
      auVar13._0_8_ = uVar8;
      return auVar13;
    }
    uVar4 = FUN_03fb1bf0(param_1,uVar8);
    uVar11 = uVar7;
    if ((uVar4 & 1) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + (uVar8 / 0x30) * 0x10);
      lVar12 = *plVar1;
      uVar7 = FUN_03f5fe4c((long)plVar1 + 10,uVar9);
      piVar6 = (int *)(lVar12 + (uVar7 & 0xffff) * 0x18);
      if ((*param_2 == *piVar6) &&
         ((*param_2 != 0 ||
          (uVar7 = FUN_03f947c4(param_1 + 0x20,*(undefined8 *)(param_2 + 2),
                                *(undefined8 *)(piVar6 + 2)), (uVar7 & 1) != 0)))) {
        uVar9 = 0xffffffffffffffff;
        goto LAB_03fb1ad4;
      }
    }
    else {
      uVar11 = uVar8;
      if (uVar7 != 0xffffffffffffffff) {
        uVar11 = uVar7;
      }
    }
    lVar10 = lVar10 + 1;
    uVar8 = lVar10 + uVar8;
    uVar7 = uVar11;
  } while( true );
}

