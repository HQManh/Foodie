// rea decompile_all
// name: System.Text.EncodingHelper$$InternalCodePage
// address: 0x7452d60
// body: available
// range: 0x7452d60-0x7452d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Text_EncodingHelper__InternalCodePage(uint *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  size_t sVar7;
  void *__s;
  int *piVar8;
  size_t sVar9;
  byte bVar10;
  undefined8 uVar11;
  uint uVar12;
  char *__s_00;
  ulong uVar13;
  ulong uStack_80;
  size_t sStack_78;
  void *pvStack_70;
  byte abStack_68 [8];
  size_t sStack_60;
  void *pvStack_58;
  
  uVar3 = *param_1;
  *param_1 = 0xffffffff;
  FUN_03f8a4b8(abStack_68);
  if ((abStack_68[0] & 1) == 0) {
    uStack_80 = (ulong)abStack_68[0];
    sStack_78 = sStack_60;
    pvStack_70 = pvStack_58;
  }
  else {
    FUN_03f5d0a4(&uStack_80,pvStack_58,sStack_60);
  }
  sVar9 = (size_t)((byte)uStack_80 >> 1);
  sVar7 = sVar9;
  if ((uStack_80 & 1) != 0) {
    sVar7 = sStack_78;
  }
  if (sVar7 != 0) {
    sVar9 = 0;
    do {
      pvVar2 = (void *)((ulong)&uStack_80 | 1);
      if ((uStack_80 & 1) != 0) {
        pvVar2 = pvStack_70;
      }
      bVar10 = *(byte *)((long)pvVar2 + sVar9);
      if (0xffffffe5 < (bVar10 & 0xffffffdf) - 0x5b) {
        bVar5 = bVar10 | 0x20;
        if (0x19 < bVar10 - 0x41) {
          bVar5 = bVar10;
        }
        bVar10 = bVar5;
        *(byte *)((long)pvVar2 + sVar9) = bVar10;
      }
      if (bVar10 == 0x2d) {
        *(undefined1 *)((long)pvVar2 + sVar9) = 0x5f;
      }
      sVar9 = sVar9 + 1;
    } while (sVar7 != sVar9);
    sVar9 = (size_t)((byte)uStack_80 >> 1);
  }
  uVar4 = uStack_80 & 1;
  uVar13 = 0;
  uVar12 = 0;
  pvVar2 = (void *)((ulong)&uStack_80 | 1);
  if ((uStack_80 & 1) != 0) {
    pvVar2 = pvStack_70;
    sVar9 = sStack_78;
  }
  __s_00 = (char *)0x1;
  do {
    while (uVar13 = uVar13 + 1, (char *)0x6 < __s_00) {
      sVar7 = strlen(__s_00);
      if (sVar7 == sVar9) {
        if (sVar9 == 0xffffffffffffffff) {
          uVar11 = FUN_03f695e8(&uStack_80);
          if (((byte)uStack_80 & 1) != 0) {
            operator_delete(pvStack_70);
          }
          if ((abStack_68[0] & 1) != 0) {
            operator_delete(pvStack_58);
          }
                    /* WARNING: Subroutine does not return */
          FUN_0404c2dc(uVar11);
        }
        iVar6 = memcmp(pvVar2,__s_00,sVar9);
        if (iVar6 == 0) {
          *param_1 = uVar12;
          goto LAB_03f69e0c;
        }
      }
      __s_00 = *(char **)(&UNK_08fa9388 + uVar13 * 8);
      if ((uVar13 & 0x1fffffffffffffff) == 0x24) goto LAB_03f69e0c;
    }
    uVar12 = (uint)__s_00;
    __s_00 = *(char **)(&UNK_08fa9388 + uVar13 * 8);
  } while ((uVar13 & 0x1fffffffffffffff) != 0x24);
LAB_03f69e0c:
  if (4 < (long)sVar9) {
    piVar1 = (int *)((long)pvVar2 + sVar9);
    __s = pvVar2;
    while( true ) {
      piVar8 = memchr(__s,0x75,sVar9 - 4);
      if (piVar8 == (int *)0x0) break;
      if (*piVar8 == 0x5f667475 && (char)piVar8[1] == '8') {
        if ((piVar8 != piVar1) && ((long)piVar8 - (long)pvVar2 != -1)) {
          *param_1 = *param_1 | 0x10000000;
        }
        break;
      }
      __s = (void *)((long)piVar8 + 1);
      sVar9 = (long)piVar1 - (long)__s;
      if ((long)sVar9 < 5) break;
    }
  }
  if ((uVar3 == 0) || (*param_1 != 0xffffffff)) {
    uVar11 = 0;
    if (uVar4 == 0) goto LAB_03f69ea0;
  }
  else {
    pvVar2 = (void *)((ulong)abStack_68 | 1);
    if ((abStack_68[0] & 1) != 0) {
      pvVar2 = pvStack_58;
    }
    uVar11 = FUN_03f967b4(pvVar2);
    if (((byte)uStack_80 & 1) == 0) goto LAB_03f69ea0;
  }
  operator_delete(pvStack_70);
LAB_03f69ea0:
  if ((abStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
  return uVar11;
}

