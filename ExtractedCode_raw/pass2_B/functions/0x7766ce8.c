// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$PickDeviceFont
// address: 0x7766ce8
// body: available
// range: 0x7766ce8-0x77670f3 inclusive
// range: 0x7767148-0x776718f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77670f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7767188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776718c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_Bridge_R1UserTextSupport__PickDeviceFont(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_09522c73 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b05f0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09522c73 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(lVar3,DAT_091a8698);
  lVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar4,DAT_091b0558);
  if ((param_2 != 0) && (lVar10 = *(long *)(param_2 + 0x20), lVar10 != 0)) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar11 = 0;
      uVar7 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar11) {
LAB_0776718c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar4 == 0) goto LAB_07767188;
        iVar2 = *(int *)(lVar4 + 0x18);
        uVar12 = *(undefined8 *)(lVar10 + uVar11 * 8 + 0x20);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar2) {
          System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar2,0);
        }
        if (param_1 == 0) goto LAB_07767188;
        if (0 < (int)*(ulong *)(param_1 + 0x18)) {
          uVar7 = 0;
          uVar8 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar7) goto LAB_0776718c;
            uVar13 = *(undefined8 *)(param_1 + 0x20 + uVar7 * 8);
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar5 = System_IO_Path__GetFileName(uVar13,0);
            if (lVar5 == 0) goto LAB_07767188;
            iVar2 = System_String__IndexOf(lVar5,uVar12,5,0);
            if (-1 < iVar2) {
              if (lVar3 == 0) goto LAB_07767188;
              uVar8 = FUN_053ebc3c(lVar3,uVar13,DAT_091a86c8);
              if ((uVar8 & 1) == 0) {
                if (*(int *)(DAT_09189998 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar8 = _GAME_Bridge_R1UserTextSupport__HasFontExtension(lVar5);
                if ((uVar8 & 1) != 0) {
                  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar8 = _GAME_Bridge_R1UserTextSupport__HasSkippedWord(lVar5);
                  lVar5 = DAT_091b0570;
                  if ((uVar8 & 1) == 0) {
                    lVar9 = *(long *)(lVar4 + 0x10);
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_07767188;
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar6 = uVar13;
                      thunk_FUN_03f5d7b8(puVar6,uVar13);
                    }
                    else {
                      FUN_057e0c68(lVar4,uVar13,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                }
              }
            }
            uVar8 = (ulong)*(uint *)(param_1 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(param_1 + 0x18));
        }
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09517140 == '\0') {
          FUN_03f5c2a4(&DAT_0918b378);
          DAT_09517140 = '\x01';
        }
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_057e2748(lVar4,*(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x18),DAT_091b05f0);
        FUN_057e185c(&local_98,lVar4,DAT_091b05a8);
        local_70 = local_88;
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
        while (uVar7 = FUN_071bd28c(&local_80,DAT_091a45a0), uVar12 = local_70, (uVar7 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_053ec72c(lVar3,local_70,DAT_091a86b8);
          uVar13 = *(undefined8 *)(param_2 + 0x18);
          if (*(int *)(DAT_09189998 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = _GAME_Bridge_R1UserTextSupport__HasGlyphs(uVar12,uVar13);
          if ((uVar7 & 1) != 0) {
            FUN_071bd288(&local_80,DAT_091a4598);
            return uVar12;
          }
        }
        FUN_071bd288(&local_80,DAT_091a4598);
        uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    return 0;
  }
LAB_07767188:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

