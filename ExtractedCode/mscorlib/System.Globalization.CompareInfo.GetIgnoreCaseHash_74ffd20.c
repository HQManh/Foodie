// rea decompile_all
// name: System.Globalization.CompareInfo$$GetIgnoreCaseHash
// address: 0x74ffd20
// body: available
// range: 0x74ffd20-0x75001b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fff4c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7500194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75001b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75001b4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_CompareInfo__GetIgnoreCaseHash(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_260 [520];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_0952166a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197198);
    FUN_03f5c2a4(&DAT_09175028);
    FUN_03f5c2a4(&DAT_09187df0);
    FUN_03f5c2a4(&DAT_091d2fc0);
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ba9a8);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_0952166a = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_07500184:
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if ((int)param_1[2] == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x074ffecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
        return uVar8;
      }
      goto LAB_075001b4;
    }
    if ((int)param_1[2] < 0x100) {
      memset(auStack_260,0,0x1fe);
      lVar4 = 0;
      auVar10._8_8_ = 0xff;
      auVar10._0_8_ = auStack_260;
    }
    else {
      if (*(int *)(DAT_09175028 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = DAT_09197198;
      lVar3 = *(long *)(DAT_09197198 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(lVar4 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      plVar5 = (long *)**(long **)(lVar4 + 0xb8);
      if (plVar5 == (long *)0x0) goto LAB_07500184;
      lVar4 = (**(code **)(*plVar5 + 0x178))
                        (plVar5,(int)param_1[2],*(undefined8 *)(*plVar5 + 0x180));
      auVar10 = FUN_06109734(lVar4,DAT_091ba9a8);
    }
    if (DAT_09515cf2 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09515cf2 = '\x01';
    }
    uVar6 = System_String__GetRawStringData(param_1,0);
    uVar2 = System_MemoryExtensions__ToUpperInvariant
                      (uVar6,(int)param_1[2],auVar10._0_8_,auVar10._8_8_,0);
    if (auVar10._8_4_ < uVar2) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lVar3 = DAT_091d2fc0;
    lVar9 = *(long *)(DAT_091d2fc0 + 0x38);
    if (lVar9 == 0) {
      FUN_03f5c2a4(&DAT_091ba8e0);
      lVar9 = *(long *)(lVar3 + 0x38);
      if (lVar9 == 0) {
        FUN_03f95ac8(lVar3);
        lVar9 = *(long *)(lVar3 + 0x38);
      }
    }
    uVar6 = FUN_04c072b8(auVar10._0_8_,(ulong)uVar2,*(undefined8 *)(lVar9 + 0x18));
    uVar8 = (ulong)uVar2 << 1;
    if ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | uVar8) != (long)(int)uVar8) {
      uVar6 = FUN_03f5c560();
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,lVar3);
      }
      goto LAB_075001b4;
    }
    auVar10 = FUN_06108530(uVar6,uVar2 << 1,DAT_091ba930);
    if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095216cf == '\0') {
      FUN_03f5c2a4(&DAT_09187df0);
      DAT_095216cf = '\x01';
    }
    if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = **(undefined8 **)(DAT_09187df0 + 0xb8);
    if (DAT_095216d0 == '\0') {
      FUN_03f5c2a4(&DAT_09187df0);
      FUN_03f5c2a4(&DAT_091d3020);
      FUN_03f5c2a4(&DAT_091b9798);
      DAT_095216d0 = '\x01';
    }
    uVar7 = FUN_04c072ac(auVar10._0_8_,auVar10._8_8_,DAT_091d3020);
    if (*(int *)(DAT_09187df0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187df0);
    }
    uVar8 = System_Marvin__ComputeHash32(uVar7,auVar10._8_8_ & 0xffffffff,uVar6,0);
    if (lVar4 != 0) {
      if (*(int *)(DAT_09175028 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = DAT_09197198;
      lVar9 = *(long *)(DAT_09197198 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      plVar5 = (long *)**(long **)(lVar3 + 0xb8);
      if (plVar5 == (long *)0x0) goto LAB_07500184;
      (**(code **)(*plVar5 + 0x188))(plVar5,lVar4,0,*(undefined8 *)(*plVar5 + 400));
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return uVar8 & 0xffffffff;
    }
  }
LAB_075001b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

