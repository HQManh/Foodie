// rea decompile_all
// name: CookingGraph.LevelStringCompression$$Decode
// address: 0x4425ab4
// body: available
// range: 0x4425ab4-0x44261af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4425f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4425fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4425fa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4425fec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4426068 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442606c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44260b8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44260bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44260c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44260c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44260c8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442614c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044260cc) */
/* WARNING: Removing unreachable block (ram,0x04426154) */
/* WARNING: Removing unreachable block (ram,0x044260c8) */
/* WARNING: Removing unreachable block (ram,0x04426150) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long CookingGraph_LevelStringCompression__Decode(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  int *piVar14;
  
  if ((DAT_09517f7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09183980);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_0918c558);
    FUN_03f5c2a4(&DAT_09214948);
    FUN_03f5c2a4(&DAT_09214620);
    FUN_03f5c2a4(&DAT_09225e38);
    DAT_09517f7f = 1;
  }
  if (param_1 == 0) {
    param_1 = **(long **)(DAT_09535468 + 0xb8);
    thunk_FUN_03fc39d4(&DAT_09182d98);
    uVar5 = thunk_FUN_03f9944c();
    puVar13 = &DAT_09206cf0;
  }
  else {
    uVar3 = System_String__StartsWith(param_1,DAT_09225e38,4,0);
    if ((uVar3 & 1) != 0) {
      if (DAT_09225e38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = System_String__Substring(param_1,*(undefined4 *)(DAT_09225e38 + 0x10),0);
      if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Text_RegularExpressions_Regex__IsMatch(lVar4,DAT_09214620,0);
      if ((uVar3 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(uint *)(lVar4 + 0x10) & 0x80000003) != 1) {
          lVar4 = System_String__Replace(lVar4,0x2d,0x2b,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = System_String__Replace(lVar4,0x5f,0x2f,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(int *)(lVar4 + 0x10) + 3;
          uVar1 = *(int *)(lVar4 + 0x10) + 6;
          if (-1 < (int)uVar2) {
            uVar1 = uVar2;
          }
          uVar5 = System_String__PadRight(lVar4,uVar1 & 0xfffffffc,0x3d,0);
          if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Convert__FromBase64String(uVar5,0);
          plVar6 = (long *)thunk_FUN_03f9944c(DAT_09188030);
          System_IO_MemoryStream___ctor(plVar6,uVar5,0);
          plVar7 = (long *)thunk_FUN_03f9944c(DAT_09183980);
          System_IO_Compression_DeflateStream___ctor(plVar7,plVar6,0,0);
          plVar8 = (long *)thunk_FUN_03f9944c(DAT_09188030);
          System_IO_MemoryStream___ctor(plVar8,0);
          lVar4 = FUN_03f5c394(DAT_0917fc88,0x1000);
          if (lVar4 != 0) {
            while (plVar7 != (long *)0x0) {
              uVar2 = (**(code **)(*plVar7 + 0x368))
                                (plVar7,lVar4,0,*(undefined4 *)(lVar4 + 0x18),
                                 *(undefined8 *)(*plVar7 + 0x370));
              if ((int)uVar2 < 1) {
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar4 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
                if (lVar4 == 0) {
                  thunk_FUN_03fc39d4(&DAT_091870a8);
                  uVar5 = thunk_FUN_03f9944c();
                  uVar12 = thunk_FUN_03fc39d4(&DAT_092012d8);
                  System_IO_InvalidDataException___ctor(uVar5,uVar12,0);
                  uVar12 = thunk_FUN_03fc39d4(&DAT_091d24a8);
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar5,uVar12);
                }
                plVar10 = (long *)thunk_FUN_03f9944c(DAT_0918c558);
                System_Text_UTF8Encoding___ctor(plVar10,0,1,0);
                if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar5 = (**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(uVar5,uVar5);
                }
                lVar4 = (**(code **)(*plVar10 + 0x368))
                                  (plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x370));
                if (plVar8 == (long *)0x0) goto LAB_04425e94;
                lVar9 = *plVar8;
                uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar3 == 0) goto LAB_04425e6c;
                piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_04425e54;
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
              if (0x100000 < (long)(lVar9 + (ulong)uVar2)) {
                thunk_FUN_03fc39d4(&DAT_091870a8);
                uVar5 = thunk_FUN_03f9944c();
                uVar12 = thunk_FUN_03fc39d4(&DAT_092004b0);
                System_IO_InvalidDataException___ctor(uVar5,uVar12,0);
                uVar12 = thunk_FUN_03fc39d4(&DAT_091d24a8);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar5,uVar12);
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              (**(code **)(*plVar8 + 0x398))(plVar8,lVar4,0,uVar2,*(undefined8 *)(*plVar8 + 0x3a0));
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      thunk_FUN_03fc39d4(&DAT_09184908);
      uVar5 = thunk_FUN_03f9944c();
      uVar12 = thunk_FUN_03fc39d4(&DAT_09201f00);
      System_FormatException___ctor(uVar5,uVar12,0);
      uVar12 = thunk_FUN_03fc39d4(&DAT_091d24a8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar12);
    }
    if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Text_RegularExpressions_Regex__IsMatch(param_1,DAT_09214948,0);
    if ((uVar3 & 1) == 0) {
      return param_1;
    }
    thunk_FUN_03fc39d4(&DAT_09182d98);
    uVar5 = thunk_FUN_03f9944c();
    puVar13 = &DAT_092126e8;
  }
  uVar12 = thunk_FUN_03fc39d4(puVar13);
  CookingGraph_CookingGraphFormatException___ctor(uVar5,uVar12,0,param_1);
  uVar12 = thunk_FUN_03fc39d4(&DAT_091d24a8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar12);
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar14 = piVar14 + 4;
    if (uVar3 == 0) break;
LAB_04425e54:
    if (*(long *)(piVar14 + -2) == DAT_09185a58) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04425e88;
    }
  }
LAB_04425e6c:
  puVar11 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_04425e88:
  (*(code *)*puVar11)(plVar8,puVar11[1]);
LAB_04425e94:
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_09185a58) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04425ef8;
        }
        uVar3 = uVar3 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar3 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_04425ef8:
    (*(code *)*puVar11)(plVar7,puVar11[1]);
  }
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_09185a58) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04425f6c;
        }
        uVar3 = uVar3 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar3 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_04425f6c:
    (*(code *)*puVar11)(plVar6,puVar11[1]);
  }
  return lVar4;
}

