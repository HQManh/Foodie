// rea decompile_all
// name: System.Array$$SetValueImpl
// address: 0x75dcce8
// body: available
// range: 0x75dcce8-0x75dcceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__SetValueImpl(long *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *__src;
  long lVar6;
  undefined8 uVar7;
  size_t __n;
  void *pvVar8;
  uint *puVar9;
  uint *puVar10;
  byte abStack_68 [16];
  void *pvStack_58;
  
  lVar4 = FUN_03fbeb18(*param_1);
  iVar3 = FUN_03fc1104();
  pvVar8 = (void *)((long)param_1 + (long)iVar3 * (long)param_3 + 0x20);
  if ((*(long *)(lVar4 + 0x60) != 0) && ((*(ushort *)(lVar4 + 0x135) >> 3 & 1) != 0)) {
    FUN_03f9966c(pvVar8,param_2,lVar4);
    return;
  }
  __n = (size_t)iVar3;
  if (param_2 == (undefined8 *)0x0) {
    memset(pvVar8,0,__n);
    return;
  }
  puVar10 = (uint *)(lVar4 + 0x28);
  uVar1 = *puVar10;
  lVar5 = FUN_03f99350(param_2,lVar4);
  if (-1 < (int)uVar1) {
    if (lVar5 != 0) {
      param_1[(long)param_3 + 4] = (long)param_2;
      FUN_03f5d7b8();
      return;
    }
    FUN_03f9161c(abStack_68,*(undefined8 *)(*param_1 + 0x40),*param_2);
    pvVar8 = (void *)((ulong)abStack_68 | 1);
    if ((abStack_68[0] & 1) != 0) {
      pvVar8 = pvStack_58;
    }
    uVar7 = FUN_03fa6838(pvVar8);
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar7,0);
  }
  if (lVar5 != 0) {
    __src = (void *)FUN_03f99594(param_2);
    memcpy(pvVar8,__src,__n);
    FUN_03f5d7b8(pvVar8,__n);
    return;
  }
  lVar5 = FUN_03f98700(param_2);
  puVar9 = (uint *)(lVar5 + 0x28);
  if ((int)*puVar9 < 0) {
    iVar3 = FUN_03fbeda4(lVar5);
    if ((*(ushort *)(lVar4 + 0x135) >> 2 & 1) != 0) {
      lVar6 = FUN_03fbeb20(lVar4);
      puVar10 = (uint *)(lVar6 + 8);
    }
    uVar1 = *puVar10;
    if ((*(ushort *)(lVar5 + 0x135) >> 2 & 1) != 0) {
      lVar6 = FUN_03fbeb20(lVar5);
      puVar9 = (uint *)(lVar6 + 8);
    }
    uVar2 = *puVar9 >> 0x10 & 0xff;
    if (((uVar1 & 0xff0000) == 0x20000) && (uVar2 != 2)) {
      if (uVar2 - 3 < 0xb) {
        uVar7 = FUN_03fa673c("value","not a widening conversion");
                    /* WARNING: Subroutine does not return */
        FUN_03fa5c38(uVar7,0);
      }
    }
    else {
      iVar3 = iVar3 + -0x10;
      uVar7 = FUN_03f99594(param_2);
      uVar7 = FUN_03f6bb54(uVar2,uVar7);
      uVar1 = uVar1 >> 0x10 & 0xff;
      if (uVar1 < 8) {
        if (uVar1 < 5) {
          if (uVar1 == 3) {
            FUN_03f6bcd4(uVar7,pvVar8,uVar2,__n,(long)iVar3);
            return;
          }
          if (uVar1 == 4) {
            FUN_03f6bde8(uVar7,pvVar8,uVar2,__n,(long)iVar3);
            return;
          }
        }
        else {
          if (uVar1 == 5) {
            FUN_03f6bc78(uVar7,pvVar8,uVar2,__n,(long)iVar3);
            return;
          }
          if (uVar1 == 6) {
            FUN_03f6be78(uVar7,pvVar8,uVar2,__n,(long)iVar3);
            return;
          }
          if (uVar1 == 7) {
            FUN_03f6bcd4(uVar7,pvVar8,uVar2,__n,(long)iVar3);
            return;
          }
        }
      }
      else if (uVar1 < 0xb) {
        if (uVar1 == 8) {
          FUN_03f6bf08(uVar7,pvVar8,uVar2,__n,(long)iVar3);
          return;
        }
        if (uVar1 == 9) {
          FUN_03f6bd30(uVar7,pvVar8,uVar2,__n,(long)iVar3);
          return;
        }
        if (uVar1 == 10) {
          FUN_03f6bf98(uVar7,pvVar8,uVar2,__n,(long)iVar3);
          return;
        }
      }
      else {
        if (uVar1 == 0xb) {
          FUN_03f6bd8c(uVar7,pvVar8,uVar2,__n,(long)iVar3);
          return;
        }
        if (uVar1 == 0xc) {
          FUN_03f6c028(uVar7,pvVar8,uVar2,__n,(long)iVar3);
          return;
        }
        if (uVar1 == 0xd) {
          FUN_03f6c0a8(uVar7,pvVar8,uVar2,__n,(long)iVar3);
          return;
        }
      }
    }
  }
  uVar7 = FUN_03f6bc1c(lVar4,lVar5);
  if ((abStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar7);
}

