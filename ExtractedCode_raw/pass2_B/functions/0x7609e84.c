// rea decompile_all
// name: System.ByteMatcher$$Match
// address: 0x7609e84
// body: available
// range: 0x7609e84-0x760a25f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760a110 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a228 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a22c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a240 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a250 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a25c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0760a24c) */

undefined4
System_ByteMatcher__Match(long param_1,long param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  
  if ((DAT_09522035 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918ba10);
    DAT_09522035 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *plVar3;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == DAT_09185b08) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_07609f80;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b08,0);
LAB_07609f80:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0760a00c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0760a00c:
    uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      uVar12 = 0;
      uVar13 = 8;
LAB_0760a15c:
      plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
      if (plVar3 == (long *)0x0) goto LAB_0760a1dc;
      lVar8 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0760a1b4;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0760a074;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_0760a074:
    lVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    uVar2 = DAT_0917fc88;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = thunk_FUN_03f99350(lVar8,DAT_0917fc88);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar8,uVar2);
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    uVar13 = param_4;
    if ((int)uVar1 <= (int)param_4) {
      uVar13 = uVar1;
    }
    if (0 < (int)uVar13) {
      uVar9 = 0;
      do {
        if (uVar9 == uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(param_2 + 0x18) <= param_3 + uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(ushort *)(param_2 + (long)(int)(param_3 + uVar9) * 2 + 0x20) !=
            (ushort)*(byte *)(lVar5 + (int)uVar9 + 0x20)) break;
        if (uVar9 - uVar1 == -1) {
          plVar6 = *(long **)(param_1 + 0x10);
          *param_5 = uVar1;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                     (plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x310));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_0918ba10 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          puVar7 = (undefined4 *)thunk_FUN_03f99594();
          uVar12 = *puVar7;
          uVar13 = 7;
          goto LAB_0760a15c;
        }
        uVar9 = uVar9 + 1;
      } while ((uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU)) != uVar9);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0760a1d0;
    }
  }
LAB_0760a1b4:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0760a1d0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_0760a1dc:
  if ((uVar13 | 8) == 8) {
    uVar12 = 0xffffffff;
    *param_5 = 0;
  }
  return uVar12;
}

