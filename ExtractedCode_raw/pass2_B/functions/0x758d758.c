// rea decompile_all
// name: System.IO.Path$$Combine
// address: 0x758d758
// body: available
// range: 0x758d758-0x758da47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758d9c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758d9c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758da10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Path__Combine(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_09521b48 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521b48 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09220b78);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
LAB_0758d9fc:
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d5860);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  auVar12 = System_Text_StringBuilder___ctor(plVar3,0);
  uVar8 = *(uint *)(param_1 + 0x18);
  if (0 < (int)uVar8) {
    lVar10 = 0;
    bVar1 = false;
    uVar11 = uVar8;
    do {
      if (uVar8 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558(auVar12._0_8_,auVar12._8_8_);
      }
      lVar9 = *(long *)(param_1 + 0x20 + lVar10 * 8);
      if (lVar9 == 0) {
        thunk_FUN_03fc39d4(&DAT_09181550);
        uVar6 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_09209c60);
        uVar5 = thunk_FUN_03fc39d4(&DAT_09220b78);
        System_ArgumentNullException___ctor(uVar6,uVar7,uVar5,0);
        goto LAB_0758d9fc;
      }
      if (*(int *)(lVar9 + 0x10) != 0) {
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System_String__IndexOfAny(lVar9,**(undefined8 **)(DAT_09188f20 + 0xb8),0);
        if (iVar2 != -1) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          uVar7 = thunk_FUN_03fc39d4(&DAT_09204740);
          System_ArgumentException___ctor(uVar6,uVar7,0);
          goto LAB_0758d9fc;
        }
        if (bVar1) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (plVar3 == (long *)0x0) goto LAB_0758d9c8;
          System_Text_StringBuilder__Append
                    (plVar3,*(undefined8 *)(*(long *)(DAT_09188f20 + 0xb8) + 0x10),0);
        }
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_IO_Path__IsPathRooted(lVar9);
        if ((uVar4 & 1) == 0) {
          if (plVar3 == (long *)0x0) goto LAB_0758d9c8;
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_0758d9c8;
          System_Text_StringBuilder__set_Length(plVar3,0,0);
        }
        uVar11 = uVar11 - 1;
        auVar12 = System_Text_StringBuilder__Append(plVar3,lVar9,0);
        uVar6 = auVar12._0_8_;
        bVar1 = false;
        if (0 < (int)uVar11) {
          iVar2 = *(int *)(lVar9 + 0x10) + -1;
          auVar12._8_4_ = iVar2;
          auVar12._0_8_ = uVar6;
          auVar12._12_4_ = 0;
          if (0 < *(int *)(lVar9 + 0x10)) {
            auVar12 = System_String__get_Chars(lVar9,iVar2,0);
            uVar8 = auVar12._0_4_;
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              auVar12 = FUN_03f5c424(DAT_09188f20);
            }
            lVar9 = *(long *)(DAT_09188f20 + 0xb8);
            if ((uint)*(ushort *)(lVar9 + 10) != (uVar8 & 0xffff)) {
              if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                auVar12 = FUN_03f5c424(DAT_09188f20);
                lVar9 = *(long *)(DAT_09188f20 + 0xb8);
              }
              if ((uint)*(ushort *)(lVar9 + 8) != (uVar8 & 0xffff)) {
                if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                  auVar12 = FUN_03f5c424(DAT_09188f20);
                  lVar9 = *(long *)(DAT_09188f20 + 0xb8);
                }
                bVar1 = (uint)*(ushort *)(lVar9 + 0x18) != (uVar8 & 0xffff);
                goto LAB_0758d944;
              }
            }
            bVar1 = false;
          }
        }
      }
LAB_0758d944:
      uVar8 = *(uint *)(param_1 + 0x18);
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < (int)uVar8);
  }
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0758d978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    return;
  }
LAB_0758d9c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

