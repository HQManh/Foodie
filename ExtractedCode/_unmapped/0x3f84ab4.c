// rea decompile_all
// name: FUN_03f84ab4
// address: 0x3f84ab4
// body: available
// range: 0x3f84ab4-0x3f84d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f84ab4(double *param_1,double *param_2)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  double dVar11;
  ulong uVar12;
  double dVar13;
  double local_50;
  double local_40;
  
  local_40 = *param_2;
  local_50 = param_2[1];
  dVar3 = ABS(local_40);
  if (ABS(local_40) <= ABS(local_50)) {
    dVar3 = ABS(local_50);
  }
  dVar7 = *param_1;
  dVar8 = param_1[1];
  dVar3 = logb(dVar3);
  iVar2 = 0;
  if ((ABS(dVar3) != INFINITY) && (!NAN(ABS(dVar3)))) {
    iVar2 = (int)dVar3;
    local_40 = scalbn(local_40,-iVar2);
    local_50 = scalbn(local_50,-iVar2);
  }
  dVar13 = local_50 * local_50 + local_40 * local_40;
  dVar4 = scalbn((dVar8 * local_50 + local_40 * dVar7) / dVar13,-iVar2);
  dVar5 = scalbn((-(dVar7 * local_50) + local_40 * dVar8) / dVar13,-iVar2);
  if ((NAN(dVar4)) && (NAN(dVar5))) {
    if ((dVar13 != 0.0) || ((NAN(dVar7) && (NAN(dVar8))))) {
      dVar5 = ABS(dVar8);
      dVar11 = ABS(dVar7);
      dVar13 = ABS(local_40);
      bVar1 = true;
      if ((dVar5 != INFINITY) && (bVar1 = false, !NAN(dVar11))) {
        bVar1 = dVar11 == INFINITY;
      }
      dVar9 = ABS(local_50);
      if ((((!bVar1) || (dVar13 == INFINITY)) || (NAN(dVar13))) ||
         ((dVar9 == INFINITY || (NAN(dVar9))))) {
        if (((dVar11 != INFINITY) && (!NAN(dVar11))) &&
           ((dVar3 == INFINITY && ((dVar5 != INFINITY && (!NAN(dVar5))))))) {
          uVar12 = 0x3ff0000000000000;
          if (dVar13 != INFINITY) {
            uVar12 = 0;
          }
          uVar10 = 0x3ff0000000000000;
          if (dVar9 != INFINITY) {
            uVar10 = 0;
          }
          dVar4 = (dVar8 * (double)(uVar10 ^ (ulong)local_50 & 0x8007ffffffffffff) +
                  (double)((ulong)local_40 ^ ((ulong)local_40 ^ uVar12) & 0x7ff8000000000000) *
                  dVar7) * 0.0;
        }
      }
      else {
        uVar12 = 0x3ff0000000000000;
        if (dVar11 != INFINITY) {
          uVar12 = 0;
        }
        uVar10 = 0x3ff0000000000000;
        if (dVar5 != INFINITY) {
          uVar10 = 0;
        }
        dVar4 = ((double)((ulong)dVar8 ^ ((ulong)dVar8 ^ uVar10) & 0x7ff8000000000000) * local_50 +
                local_40 * (double)((ulong)dVar7 ^ ((ulong)dVar7 ^ uVar12) & 0x7ff8000000000000)) *
                INFINITY;
      }
    }
    else {
      dVar4 = dVar7 * (double)((ulong)local_40 ^
                              ((ulong)local_40 ^ 0x7ff0000000000000) & 0x7ff8000000000000);
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar4;
  return auVar6;
}

