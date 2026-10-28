// rea decompile_all
// name: System.Enum$$InternalCompareTo
// address: 0x75eab1c
// body: available
// range: 0x75eab1c-0x75eab1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 System_Enum__InternalCompareTo(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ushort uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  ushort uVar15;
  
  lVar9 = FUN_03f98700();
  lVar10 = FUN_03f98700(param_2);
  if (lVar9 != lVar10) {
    return 2;
  }
  FUN_03f98700(param_1);
  lVar9 = FUN_03fbeb20();
  bVar3 = *(byte *)(lVar9 + 10);
  if (bVar3 < 8) {
    if (bVar3 < 5) {
      if (bVar3 != 3) {
        if (bVar3 != 4) {
          return 3;
        }
        uVar11 = (ushort)*(byte *)(param_1 + 0x10);
        uVar15 = (ushort)*(byte *)(param_2 + 0x10);
        iVar4 = (int)(char)*(byte *)(param_1 + 0x10);
        iVar1 = (int)(char)*(byte *)(param_2 + 0x10);
        bVar6 = SBORROW4(iVar4,iVar1);
        iVar2 = iVar4 - iVar1;
        bVar7 = iVar4 == iVar1;
LAB_03f72bd0:
        uVar13 = 0xffffffff;
        if (!bVar7 && iVar2 < 0 == bVar6) {
          uVar13 = 1;
        }
        if (uVar11 == uVar15) {
          return 0;
        }
        return uVar13;
      }
LAB_03f72ba4:
      uVar12 = (uint)*(ushort *)(param_1 + 0x10);
      uVar14 = (uint)*(ushort *)(param_2 + 0x10);
    }
    else {
      if (bVar3 != 5) {
        if (bVar3 == 6) {
          uVar11 = *(ushort *)(param_1 + 0x10);
          uVar15 = *(ushort *)(param_2 + 0x10);
          iVar4 = (int)(short)uVar11;
          iVar1 = (int)(short)uVar15;
          bVar6 = SBORROW4(iVar4,iVar1);
          iVar2 = iVar4 - iVar1;
          bVar7 = iVar4 == iVar1;
          goto LAB_03f72bd0;
        }
        if (bVar3 != 7) {
          return 3;
        }
        goto LAB_03f72ba4;
      }
      uVar12 = (uint)*(byte *)(param_1 + 0x10);
      uVar14 = (uint)*(byte *)(param_2 + 0x10);
    }
LAB_03f72bf8:
    bVar6 = uVar14 <= uVar12;
    bVar7 = uVar12 == uVar14;
  }
  else {
    if (bVar3 < 0xb) {
      if (bVar3 == 8) {
        iVar1 = *(int *)(param_1 + 0x10);
        iVar2 = *(int *)(param_2 + 0x10);
        bVar5 = SBORROW4(iVar1,iVar2);
        bVar6 = iVar1 - iVar2 < 0;
        bVar7 = iVar1 == iVar2;
      }
      else {
        if (bVar3 == 9) {
          uVar12 = *(uint *)(param_1 + 0x10);
          uVar14 = *(uint *)(param_2 + 0x10);
          goto LAB_03f72bf8;
        }
        if (bVar3 != 10) {
          return 3;
        }
LAB_03f72bb0:
        lVar9 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(param_2 + 0x10);
        bVar5 = SBORROW8(lVar9,lVar10);
        bVar6 = lVar9 - lVar10 < 0;
        bVar7 = lVar9 == lVar10;
      }
      uVar13 = 0xffffffff;
      if (!bVar7 && bVar6 == bVar5) {
        uVar13 = 1;
      }
      goto LAB_03f72c1c;
    }
    if (bVar3 != 0xb) {
      if (bVar3 == 0x18) goto LAB_03f72bb0;
      if (bVar3 != 0x19) {
        return 3;
      }
    }
    bVar6 = *(ulong *)(param_2 + 0x10) <= *(ulong *)(param_1 + 0x10);
    bVar7 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_2 + 0x10);
  }
  uVar13 = 0xffffffff;
  if (bVar6 && !bVar7) {
    uVar13 = 1;
  }
LAB_03f72c1c:
  uVar8 = 0;
  if (!bVar7) {
    uVar8 = uVar13;
  }
  return uVar8;
}

