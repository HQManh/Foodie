// rea decompile_all
// name: System.Number$$FindSection
// address: 0x75bf70c
// body: available
// range: 0x75bf70c-0x75bf84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Number__FindSection(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_09521d5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d5f = 1;
  }
  if (param_3 == 0) {
    return 0;
  }
  lVar5 = FUN_04c072b4(param_1,param_2,DAT_091d3030);
  iVar10 = (int)param_2;
  iVar6 = 0;
LAB_075bf774:
  iVar7 = iVar6;
  if (iVar10 <= iVar6) {
    return 0;
  }
  do {
    uVar3 = *(ushort *)(lVar5 + (long)iVar7 * 2);
    iVar6 = iVar7 + 1;
    if (uVar3 < 0x23) {
      if (uVar3 == 0x22) {
LAB_075bf7b8:
        lVar9 = (long)iVar6;
        puVar8 = (ushort *)(lVar5 + (long)iVar6 * 2);
        lVar1 = lVar9;
        if (lVar9 <= iVar10) {
          lVar1 = (long)iVar10;
        }
        do {
          if (lVar1 == lVar9) {
            return 0;
          }
          uVar2 = *puVar8;
          if (uVar2 == 0) break;
          lVar9 = lVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar2 != uVar3);
        iVar6 = (int)lVar9;
      }
      else if (uVar3 == 0) {
        return 0;
      }
    }
    else {
      if (uVar3 == 0x27) goto LAB_075bf7b8;
      if (uVar3 == 0x5c) {
        if ((iVar6 < iVar10) && (*(short *)(lVar5 + (long)iVar6 * 2) != 0)) {
          iVar6 = iVar7 + 2;
        }
      }
      else if (uVar3 == 0x3b) break;
    }
    iVar7 = iVar6;
    if (iVar10 <= iVar6) {
      return 0;
    }
  } while( true );
  param_3 = param_3 + -1;
  if (param_3 == 0) {
    if (iVar10 <= iVar6) {
      return 0;
    }
    sVar4 = *(short *)(lVar5 + (long)iVar6 * 2);
    if (sVar4 != 0x3b) {
      if (sVar4 != 0) {
        return iVar6;
      }
      return 0;
    }
    return 0;
  }
  goto LAB_075bf774;
}

