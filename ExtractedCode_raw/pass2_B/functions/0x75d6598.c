// rea decompile_all
// name: System.Version$$ParseVersion
// address: 0x75d6598
// body: available
// range: 0x75d6598-0x75d6a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d6790 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d6a00 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Version__ParseVersion(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  
  local_70 = param_1;
  uStack_68 = param_2;
  if ((DAT_09521e70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f40);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_0918cc90);
    FUN_03f5c2a4(&DAT_0921d578);
    FUN_03f5c2a4(&DAT_09218620);
    FUN_03f5c2a4(&DAT_09221af8);
    DAT_09521e70 = 1;
  }
  local_80 = 0;
  local_78 = 0;
  uVar6 = FUN_04501efc(param_1,param_2,0x2e,DAT_091d2f40);
  if ((int)uVar6 < 0) {
LAB_075d6734:
    if ((param_3 & 1) == 0) {
      return 0;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_09212ea8);
    uVar11 = thunk_FUN_03fc39d4(&DAT_0921d578);
    System_ArgumentException___ctor(uVar9,uVar10,uVar11,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091dec50);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar10);
  }
  uVar15 = (uint)param_2;
  if (uVar15 <= uVar6) goto LAB_075d6a00;
  iVar8 = uVar6 + 1;
  if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  lVar1 = param_1 + (long)iVar8 * 2;
  uVar3 = uVar15 - iVar8;
  iVar7 = FUN_04501efc(lVar1,uVar3,0x2e,DAT_091d2f40);
  if (iVar7 == -1) {
    uVar16 = 0xffffffff;
LAB_075d6798:
    iVar8 = -1;
  }
  else {
    uVar16 = iVar7 + iVar8;
    uVar2 = uVar16 + 1;
    if (uVar15 < uVar2) goto LAB_075d6a00;
    if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    iVar8 = FUN_04501efc(param_1 + (long)(int)uVar2 * 2,uVar15 - uVar2,0x2e,DAT_091d2f40);
    if (iVar8 == -1) goto LAB_075d6798;
    iVar8 = iVar8 + uVar2;
    uVar2 = iVar8 + 1;
    if (uVar15 < uVar2) goto LAB_075d6a00;
    if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    iVar7 = FUN_04501efc(param_1 + (long)(int)uVar2 * 2,uVar15 - uVar2,0x2e,DAT_091d2f40);
    if (iVar7 != -1) goto LAB_075d6734;
  }
  if (uVar15 < uVar6) goto LAB_075d6a00;
  if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  uVar12 = System_Version__TryParseComponent(param_1,uVar6,DAT_0921d578,param_3 & 1,&local_80);
  if ((uVar12 & 1) != 0) {
    if (uVar16 == 0xffffffff) {
      if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar14 = System_Version__TryParseComponent
                         (lVar1,uVar3,DAT_0921d578,param_3 & 1,(long)&local_78 + 4);
      uVar12 = local_80;
      if ((uVar14 & 1) != 0) {
        uVar4 = local_78._4_4_;
        uVar9 = thunk_FUN_03f9944c(DAT_0918cc90);
        System_Version___ctor(uVar9,uVar12 & 0xffffffff,uVar4);
        return uVar9;
      }
    }
    else {
      if (uVar3 < uVar16 + ~uVar6) goto LAB_075d6a00;
      if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uVar12 = System_Version__TryParseComponent
                         (lVar1,uVar16 + ~uVar6,DAT_0921d578,param_3 & 1,(long)&local_78 + 4);
      if ((uVar12 & 1) != 0) {
        iVar7 = uVar16 + 1;
        if (iVar8 == -1) {
          if (uVar15 <= uVar16) goto LAB_075d6a00;
          if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          uVar13 = System_Version__TryParseComponent
                             (param_1 + (long)iVar7 * 2,uVar15 - iVar7,DAT_09218620,param_3 & 1,
                              &local_78);
          uVar14 = local_78;
          uVar12 = local_80;
          if ((uVar13 & 1) != 0) {
            uVar4 = local_78._4_4_;
            uVar9 = thunk_FUN_03f9944c(DAT_0918cc90);
            System_Version___ctor(uVar9,uVar12 & 0xffffffff,uVar4,uVar14 & 0xffffffff);
            return uVar9;
          }
        }
        else {
          if ((uVar15 <= uVar16) || (uVar15 - iVar7 < iVar8 + ~uVar16)) {
LAB_075d6a00:
                    /* WARNING: Subroutine does not return */
            System_ThrowHelper__ThrowArgumentOutOfRangeException();
          }
          if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          uVar12 = System_Version__TryParseComponent
                             (param_1 + (long)iVar7 * 2,iVar8 + ~uVar16,DAT_09218620,param_3 & 1,
                              &local_78);
          if ((uVar12 & 1) != 0) {
            auVar17 = FUN_03eb5750(&local_70,iVar8 + 1,DAT_091b97e0);
            uVar13 = System_Version__TryParseComponent
                               (auVar17._0_8_,auVar17._8_8_,DAT_09221af8,param_3 & 1,
                                (long)&local_80 + 4);
            uVar14 = local_78;
            uVar12 = local_80;
            if ((uVar13 & 1) != 0) {
              uVar4 = local_80._4_4_;
              uVar5 = local_78._4_4_;
              uVar9 = thunk_FUN_03f9944c(DAT_0918cc90);
              System_Version___ctor(uVar9,uVar12 & 0xffffffff,uVar5,uVar14 & 0xffffffff,uVar4);
              return uVar9;
            }
          }
        }
      }
    }
  }
  return 0;
}

