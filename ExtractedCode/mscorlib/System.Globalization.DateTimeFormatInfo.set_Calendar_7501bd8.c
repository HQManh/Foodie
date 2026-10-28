// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$set_Calendar
// address: 0x7501bd8
// body: available
// range: 0x7501bd8-0x7501fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7501ce8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7501ec4 to 0x7501a08 System.Globalization.DateTimeFormatInfo$$InitializeOverridableProperties (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7501ed8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7501f34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfo__set_Calendar(long param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_09521688 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_09521688 = 1;
  }
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095216cd == '\0') {
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_095216cd = '\x01';
  }
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
    uVar4 = System_Globalization_DateTimeFormatInfo__get_IsReadOnly(param_1);
    if ((uVar4 & 1) == 0) {
      if (param_2 != (long *)0x0) {
        plVar9 = (long *)(param_1 + 0x78);
        if ((long *)*plVar9 == param_2) {
          return;
        }
        lVar5 = System_Globalization_DateTimeFormatInfo__get_OptionalCalendars(param_1);
        if (lVar5 != 0) {
          lVar10 = 0;
          do {
            if (*(int *)(lVar5 + 0x18) <= (int)(uint)lVar10) {
              thunk_FUN_03fc39d4(&DAT_09181558);
              uVar8 = thunk_FUN_03f9944c();
              uVar6 = thunk_FUN_03fc39d4(&DAT_09225370);
              uVar7 = thunk_FUN_03fc39d4(&DAT_09208ed0);
              System_ArgumentOutOfRangeException___ctor(uVar8,uVar6,uVar7,0);
              goto LAB_07501f20;
            }
            lVar5 = System_Globalization_DateTimeFormatInfo__get_OptionalCalendars(param_1);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            sVar1 = *(short *)(lVar5 + lVar10 * 2 + 0x20);
            sVar2 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
            if (sVar1 == sVar2) {
              if (*plVar9 != 0) {
                *(undefined8 *)(param_1 + 0x120) = 0;
                thunk_FUN_03f5d7b8(param_1 + 0x120,0);
                *(undefined8 *)(param_1 + 0x128) = 0;
                thunk_FUN_03f5d7b8(param_1 + 0x128,0);
                *(undefined8 *)(param_1 + 0x130) = 0;
                thunk_FUN_03f5d7b8(param_1 + 0x130,0);
                *(undefined8 *)(param_1 + 0x68) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),0);
                *(undefined8 *)(param_1 + 0xa0) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),0);
                *(undefined8 *)(param_1 + 0x90) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),0);
                *(undefined8 *)(param_1 + 0x98) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x98),0);
                *(undefined8 *)(param_1 + 0xb0) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb0),0);
                *(undefined8 *)(param_1 + 0xa8) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),0);
                *(undefined8 *)(param_1 + 0xb8) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),0);
                *(undefined8 *)(param_1 + 0xc0) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),0);
                *(undefined8 *)(param_1 + 200) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),0);
                *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
                *(undefined8 *)(param_1 + 0x100) = 0;
                thunk_FUN_03f5d7b8(param_1 + 0x100,0);
                *(undefined8 *)(param_1 + 0x108) = 0;
                thunk_FUN_03f5d7b8(param_1 + 0x108,0);
                *(undefined8 *)(param_1 + 0xf8) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),0);
                *(undefined8 *)(param_1 + 0x70) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),0);
                *(undefined8 *)(param_1 + 0xd0) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),0);
                *(undefined8 *)(param_1 + 0xd8) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),0);
                *(undefined8 *)(param_1 + 0xe0) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe0),0);
                *(undefined8 *)(param_1 + 0x88) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),0);
                *(undefined8 *)(param_1 + 0x50) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
                *(undefined8 *)(param_1 + 0x58) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
                *(undefined8 *)(param_1 + 0x48) = 0;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
                *(undefined8 *)(param_1 + 0x158) = 0;
                thunk_FUN_03f5d7b8(param_1 + 0x158,0);
                *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
              }
              *plVar9 = (long)param_2;
              thunk_FUN_03f5d7b8(plVar9,param_2);
              plVar9 = (long *)*plVar9;
              if (plVar9 != (long *)0x0) {
                uVar8 = *(undefined8 *)(param_1 + 0x10);
                uVar3 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                System_Globalization_DateTimeFormatInfo__InitializeOverridableProperties
                          (param_1,uVar8,uVar3);
                return;
              }
              break;
            }
            lVar5 = System_Globalization_DateTimeFormatInfo__get_OptionalCalendars(param_1);
            lVar10 = lVar10 + 1;
          } while (lVar5 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar8 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09225370);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09209418);
      System_ArgumentNullException___ctor(uVar8,uVar6,uVar7,0);
    }
    else {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar8 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09204e38);
      System_InvalidOperationException___ctor(uVar8,uVar6,0);
    }
  }
  else {
    thunk_FUN_03fc39d4(&DAT_091891d0);
    uVar8 = thunk_FUN_03f9944c();
    System_PlatformNotSupportedException___ctor(uVar8,0);
  }
LAB_07501f20:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091c7a50);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar6);
}

