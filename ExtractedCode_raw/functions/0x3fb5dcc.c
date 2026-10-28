// rea decompile_all
// name: FUN_03fb5dcc
// address: 0x3fb5dcc
// body: available
// range: 0x3fb5dcc-0x3fb5eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb5dcc(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar4 = (byte *)param_1[2];
  pbVar7 = (byte *)param_1[3];
  pbVar8 = pbVar4;
  pbVar10 = pbVar7;
LAB_03fb5df8:
  do {
    uVar1 = *pbVar8 - 0x22;
    if (uVar1 < 0x3f) {
      if ((ulong)uVar1 == 0x3a) {
        pbVar8 = pbVar8 + 1;
        param_1[2] = (long)pbVar8;
        goto LAB_03fb5e28;
      }
      pbVar9 = pbVar8;
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x4a00000008001711U) == 0) goto LAB_03fb5e28;
    }
    else {
LAB_03fb5e28:
      pbVar8 = pbVar8 + 1;
      param_1[2] = (long)pbVar8;
      pbVar9 = pbVar8;
      if (pbVar8 < pbVar7) goto LAB_03fb5df8;
    }
    if (pbVar7 <= pbVar9) {
LAB_03fb5e90:
      lVar3 = *param_1;
      if (pbVar7 == pbVar10) {
        lVar5 = param_1[2];
        lVar6 = lVar5 - (long)pbVar4;
      }
      else {
        FUN_03fba208(lVar3,pbVar4,pbVar10,(long)pbVar10 - (long)pbVar4);
        lVar5 = param_1[2];
        lVar3 = *param_1;
        pbVar4 = pbVar10 + 1;
        lVar6 = lVar5 - (long)pbVar4;
      }
      FUN_03fba208(lVar3 + 0x18,pbVar4,lVar5,lVar6);
      return 1;
    }
    if (*pbVar9 != 0x2e) {
      if (*pbVar9 == 0x60) {
        param_1[2] = (long)(pbVar9 + 1);
        if (pbVar7 <= pbVar9 + 1) {
          return 0;
        }
        uVar2 = FUN_03fb6bd0(param_1);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        pbVar7 = (byte *)param_1[3];
      }
      goto LAB_03fb5e90;
    }
    pbVar8 = pbVar9 + 1;
    param_1[2] = (long)pbVar8;
    pbVar10 = pbVar9;
    if (pbVar7 <= pbVar8) {
      return 0;
    }
  } while( true );
}

