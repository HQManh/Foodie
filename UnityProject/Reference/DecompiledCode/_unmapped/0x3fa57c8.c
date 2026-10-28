// rea decompile_all
// name: FUN_03fa57c8
// address: 0x3fa57c8
// body: available
// range: 0x3fa57c8-0x3fa5a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_03fa57c8(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  undefined8 local_78;
  ulong *local_70;
  undefined8 local_68;
  
  lVar5 = FUN_03fbf14c();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_03fbf14c(param_1);
    lVar5 = lVar5 + -1;
  }
  uVar6 = FUN_03f984c8(DAT_09535448,lVar5);
  FUN_03f5ef9c(param_2,uVar6);
  uVar6 = FUN_03f984c8(DAT_09535468,lVar5);
  FUN_03f5ef9c(param_3,uVar6);
  if (*(long *)(param_1 + 0x60) != 0) {
    param_1 = FUN_03fb4784();
  }
  local_78 = 0;
  puVar7 = (undefined8 *)FUN_03fbec04(param_1,&local_78);
  if (puVar7 == (undefined8 *)0x0) {
    bVar13 = 1;
  }
  else {
    uVar12 = 0;
    bVar13 = 1;
    uVar14 = 0;
    do {
      while ((iVar4 = strcmp("value__",(char *)*puVar7), iVar4 != 0 &&
             (uVar8 = FUN_03f5d7a4(puVar7), (uVar8 & 1) == 0))) {
        lVar5 = *param_3;
        FUN_03f98700(puVar7);
        uVar6 = FUN_03f967b4();
        puVar11 = (undefined8 *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
        *puVar11 = uVar6;
        FUN_03f5d7b8(puVar11);
        local_68 = 0;
        puVar9 = (ulong *)thunk_FUN_03faaf40(puVar7,&local_68);
        local_70 = puVar9;
        lVar5 = FUN_03fbeb20(param_1);
        bVar1 = *(byte *)(lVar5 + 10);
        uVar8 = 0;
        uVar10 = (uint)bVar1;
        if (bVar1 < 6) {
          if (uVar10 == 3) {
LAB_03fa597c:
            uVar8 = (ulong)(ushort)*puVar9;
          }
          else if (uVar10 == 4) {
            uVar8 = (ulong)(char)(byte)*puVar9;
          }
          else if (bVar1 == 5) {
            uVar8 = (ulong)(byte)*puVar9;
          }
        }
        else if (bVar1 < 0x1a) {
          if ((1 << (ulong)(uVar10 & 0x1f) & 0x3000c00U) == 0) {
            if (uVar10 == 8) {
              iVar4 = FUN_03f91f84(&local_70);
              uVar8 = (ulong)iVar4;
            }
            else {
              if (uVar10 != 9) goto LAB_03fa596c;
              uVar8 = FUN_03f91ebc(&local_70);
              uVar8 = uVar8 & 0xffffffff;
            }
          }
          else {
            uVar8 = *puVar9;
          }
        }
        else {
LAB_03fa596c:
          if (uVar10 == 6) {
            uVar8 = (ulong)(short)(ushort)*puVar9;
          }
          else if (uVar10 == 7) goto LAB_03fa597c;
        }
        uVar2 = uVar12 << 3;
        uVar3 = uVar12 >> 0x1f;
        uVar12 = (ulong)((int)uVar12 + 1);
        *(ulong *)(*param_2 + (-uVar3 & 0xfffffff800000000 | uVar2) + 0x20) = uVar8;
        bVar13 = uVar14 <= uVar8 & bVar13;
        puVar7 = (undefined8 *)FUN_03fbec04(param_1,&local_78);
        uVar14 = uVar8;
        if (puVar7 == (undefined8 *)0x0) {
          return bVar13;
        }
      }
      puVar7 = (undefined8 *)FUN_03fbec04(param_1,&local_78);
    } while (puVar7 != (undefined8 *)0x0);
  }
  return bVar13;
}

