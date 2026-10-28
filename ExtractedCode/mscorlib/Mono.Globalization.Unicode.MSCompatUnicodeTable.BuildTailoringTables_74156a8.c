// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTable$$BuildTailoringTables
// address: 0x74156a8
// body: available
// range: 0x74156a8-0x7415e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7415d4c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7415d50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7415d54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7415e1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_MSCompatUnicodeTable__BuildTailoringTables
               (long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int local_6c;
  int local_68;
  undefined4 local_64;
  
  if ((DAT_09520f46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09175b18);
    FUN_03f5c2a4(&DAT_09182b60);
    FUN_03f5c2a4(&DAT_09182b58);
    FUN_03f5c2a4(&DAT_091877c0);
    FUN_03f5c2a4(&DAT_091abd60);
    FUN_03f5c2a4(&DAT_091ae240);
    FUN_03f5c2a4(&DAT_091abd68);
    FUN_03f5c2a4(&DAT_091ae248);
    FUN_03f5c2a4(&DAT_091ae250);
    FUN_03f5c2a4(&DAT_091abd70);
    FUN_03f5c2a4(&DAT_091abd58);
    FUN_03f5c2a4(&DAT_091ae238);
    FUN_03f5c2a4(&DAT_0917bed8);
    FUN_03f5c2a4(&DAT_0917c630);
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_09187dd0);
    FUN_03f5c2a4(&DAT_091eccc0);
    FUN_03f5c2a4(&DAT_09192600);
    DAT_09520f46 = 1;
  }
  lVar9 = thunk_FUN_03f9944c(DAT_0917bed8);
  FUN_057e0400(lVar9,DAT_091abd58);
  lVar10 = thunk_FUN_03f9944c(DAT_0917c630);
  FUN_057e0400(lVar10,DAT_091ae238);
  if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar16 = *(long *)(*(long *)(DAT_09187d38 + 0xb8) + 0x78);
  if (lVar16 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(int *)(lVar16 + 0x18) != 0) {
      lVar8 = lVar16 + 0x20;
    }
  }
  if (param_2 != 0) {
    iVar24 = *(int *)(param_2 + 0x14);
    iVar2 = *(int *)(param_2 + 0x18) + iVar24;
    if (iVar24 < iVar2) {
      local_6c = 0;
      do {
        uVar1 = iVar24 + 2;
        while (sVar6 = *(short *)(lVar8 + (long)iVar24 * 2), sVar6 == 2) {
          uVar4 = *(undefined1 *)
                   ((-(ulong)(iVar24 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar24 + 1U) << 1)
                   + lVar8);
          uVar5 = *(undefined1 *)
                   ((-(ulong)(iVar24 + 2U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar24 + 2U) << 1)
                   + lVar8);
          lVar11 = thunk_FUN_03f9944c(DAT_091877c0);
          System_Object___ctor(lVar11,0);
          *(undefined1 *)(lVar11 + 0x10) = uVar4;
          *(undefined1 *)(lVar11 + 0x11) = uVar5;
          lVar16 = DAT_091ae240;
          if (lVar10 == 0) goto LAB_07415d50;
          lVar17 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_07415d50;
          uVar23 = *(uint *)(lVar10 + 0x18);
          if (uVar23 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar23 + 1;
            plVar12 = (long *)(lVar17 + (long)(int)uVar23 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_03f5d7b8(plVar12,lVar11);
          }
          else {
            FUN_057e0c68(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar24 + 3;
          uVar1 = uVar1 + 3;
          if (iVar2 <= iVar24) goto LAB_07415c14;
        }
        if (sVar6 == 1) {
          iVar24 = iVar24 + 1;
          iVar22 = iVar24;
          do {
            iVar3 = iVar22;
            uVar23 = uVar1;
            uVar1 = uVar23 + 1;
            iVar22 = iVar3 + 1;
          } while (*(short *)(lVar8 + (long)iVar3 * 2) != 0);
          uVar20 = FUN_03f5c394(DAT_0917fcc8,iVar3 - iVar24);
          uVar13 = System_IntPtr__op_Explicit(lVar8 + (long)iVar24 * 2,0);
          if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187dd0);
          }
          System_Runtime_InteropServices_Marshal__Copy(uVar13,uVar20,0,iVar3 - iVar24,0);
          lVar16 = FUN_03f5c394(DAT_0917fc88,4);
          if (lVar16 == 0) goto LAB_07415d50;
          uVar1 = *(uint *)(lVar16 + 0x18);
          uVar19 = 0;
          do {
            uVar21 = (ulong)uVar23;
            if (uVar1 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar7 = uVar23 >> 0x1f;
            lVar11 = lVar16 + uVar19;
            uVar19 = uVar19 + 1;
            uVar23 = uVar23 + 1;
            *(undefined1 *)(lVar11 + 0x20) =
                 *(undefined1 *)((-(ulong)uVar7 & 0xfffffffe00000000 | uVar21 << 1) + lVar8);
          } while (uVar19 != 4);
          uVar13 = thunk_FUN_03f9944c(DAT_09182b58);
          Mono_Globalization_Unicode_Contraction___ctor(uVar13,local_6c,uVar20,0,lVar16);
          lVar16 = DAT_091abd60;
          if (lVar9 == 0) goto LAB_07415d50;
          lVar11 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_07415d50;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar18 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar18 = uVar13;
            thunk_FUN_03f5d7b8(puVar18,uVar13);
          }
          else {
            FUN_057e0c68(lVar9,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar3 + 6;
        }
        else {
          if (sVar6 != 3) {
            FUN_039b1d98(param_1);
            local_64 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
            uVar20 = FUN_03f5c42c(DAT_09535420,&local_64);
            FUN_039b1d98(param_1);
            uVar13 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
            local_68 = iVar24;
            uVar14 = FUN_03f5c42c(DAT_09535420,&local_68);
            uVar15 = thunk_FUN_03fc39d4(&DAT_092080f0);
            uVar20 = System_String__Format(uVar15,uVar20,uVar13,uVar14,0);
            thunk_FUN_03fc39d4(&DAT_09188910);
            uVar13 = thunk_FUN_03f9944c();
            System_NotImplementedException___ctor(uVar13,uVar20,0);
            uVar20 = thunk_FUN_03fc39d4(&DAT_091d27f8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar13,uVar20);
          }
          iVar22 = -1;
          do {
            iVar3 = iVar24 + iVar22;
            iVar22 = iVar22 + 1;
          } while (*(short *)(lVar8 + (long)(iVar3 + 2) * 2) != 0);
          uVar20 = FUN_03f5c394(DAT_0917fcc8,iVar22);
          uVar13 = System_IntPtr__op_Explicit(lVar8 + (long)(iVar24 + 1) * 2,0);
          if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187dd0);
          }
          iVar3 = iVar24 + iVar22 + 2;
          System_Runtime_InteropServices_Marshal__Copy(uVar13,uVar20,0,iVar22,0);
          iVar22 = -1;
          iVar24 = iVar3;
          do {
            lVar16 = (long)iVar24;
            iVar24 = iVar24 + 1;
            iVar22 = iVar22 + 1;
          } while (*(short *)(lVar8 + lVar16 * 2) != 0);
          uVar13 = System_String__CreateString(0,lVar8,iVar3,iVar22,0);
          uVar14 = thunk_FUN_03f9944c(DAT_09182b58);
          Mono_Globalization_Unicode_Contraction___ctor(uVar14,local_6c,uVar20,uVar13,0);
          lVar16 = DAT_091abd60;
          if (lVar9 == 0) goto LAB_07415d50;
          lVar11 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_07415d50;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            puVar18 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *puVar18 = uVar14;
            thunk_FUN_03f5d7b8(puVar18,uVar14);
          }
          else {
            FUN_057e0c68(lVar9,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        local_6c = local_6c + 1;
      } while (iVar24 < iVar2);
    }
LAB_07415c14:
    if (*(int *)(DAT_09182b60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar9 != 0) {
      FUN_057e2748(lVar9,**(undefined8 **)(DAT_09182b60 + 0xb8),DAT_091abd68);
      if (*(int *)(DAT_09192600 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar18 = *(undefined8 **)(DAT_09192600 + 0xb8);
      lVar16 = puVar18[1];
      if (lVar16 == 0) {
        if (*(int *)(DAT_09192600 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar18 = *(undefined8 **)(DAT_09192600 + 0xb8);
        }
        uVar20 = *puVar18;
        lVar16 = thunk_FUN_03f9944c(DAT_09175b18);
        FUN_06d4541c(lVar16,uVar20,DAT_091eccc0,0);
        plVar12 = (long *)(*(long *)(DAT_09192600 + 0xb8) + 8);
        *plVar12 = lVar16;
        thunk_FUN_03f5d7b8(plVar12,lVar16);
      }
      if (lVar10 != 0) {
        FUN_057e280c(lVar10,lVar16,DAT_091ae248);
        uVar20 = FUN_057e28a4(lVar9,DAT_091abd70);
        *param_3 = uVar20;
        thunk_FUN_03f5d7b8();
        uVar20 = FUN_057e28a4(lVar10,DAT_091ae250);
        *param_4 = uVar20;
        thunk_FUN_03f5d7b8();
        return;
      }
    }
  }
LAB_07415d50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

