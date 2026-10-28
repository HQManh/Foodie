// rea decompile_all
// name: UniRx.CompositeDisposable$$Remove
// address: 0x409358c
// body: available
// range: 0x409358c-0x4093957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40938ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4093934 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4093938 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409393c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4093940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4093944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4093948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x409394c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4093954 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04093950) */

int UniRx_CompositeDisposable__Remove(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  long local_78;
  char *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  char local_3c [4];
  undefined8 local_38;
  
  if ((DAT_09515d2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2f18);
    FUN_03f5c2a4(&DAT_091a2f20);
    FUN_03f5c2a4(&DAT_091a2f28);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091ad1b0);
    FUN_03f5c2a4(&DAT_091ad1c8);
    FUN_03f5c2a4(&DAT_091ad1d0);
    FUN_03f5c2a4(&DAT_091ad1a8);
    FUN_03f5c2a4(&DAT_091ad1e0);
    FUN_03f5c2a4(&DAT_091ad1f0);
    FUN_03f5c2a4(&DAT_0917c300);
    DAT_09515d2c = 1;
  }
  local_38 = 0;
  local_3c[0] = '\0';
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921dc48);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c5a90);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  local_38 = *(undefined8 *)(param_1 + 0x10);
  local_70 = local_3c;
  local_3c[0] = '\0';
  local_78 = 0;
  local_68 = &local_38;
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  if (*(char *)(param_1 + 0x18) == '\0') {
    plVar13 = (long *)(param_1 + 0x20);
    if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar3 = FUN_057e1a08(*plVar13,param_2,DAT_091ad1d0);
    if (-1 < iVar3) {
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e09ec(*plVar13,iVar3,0,DAT_091ad1f0);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = FUN_057e07d0(*(long *)(param_1 + 0x20),DAT_091ad1e0);
      if (0x40 < iVar3) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = *(int *)(param_1 + 0x28);
        iVar3 = FUN_057e07d0(*(long *)(param_1 + 0x20),DAT_091ad1e0);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        if (iVar1 < iVar3 >> 1) {
          lVar10 = *plVar13;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar3 = FUN_057e07d0(lVar10,DAT_091ad1e0);
          lVar4 = thunk_FUN_03f9944c(DAT_0917c300);
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          FUN_057e0478(lVar4,iVar3 >> 1,DAT_091ad1a8);
          *plVar13 = lVar4;
          thunk_FUN_03f5d7b8(plVar13,lVar4);
          FUN_057e185c(&local_90,lVar10,DAT_091ad1c8);
          puStack_58 = puStack_88;
          local_60 = local_90;
          local_50 = local_80;
          local_90 = 0;
          puStack_88 = &local_60;
LAB_040937b4:
          uVar11 = FUN_071bd28c(&local_60,DAT_091a2f20);
          lVar10 = DAT_091ad1b0;
          if ((uVar11 & 1) != 0) {
            if (local_50 != 0) {
              lVar4 = *plVar13;
              if (lVar4 != 0) {
                lVar8 = *(long *)(lVar4 + 0x10);
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar2 = *(uint *)(lVar4 + 0x18);
                  if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                    plVar9 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar9 = local_50;
                    thunk_FUN_03f5d7b8(plVar9);
                  }
                  else {
                    FUN_057e0c68(lVar4,local_50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  goto LAB_040937b4;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_040937b4;
          }
          FUN_071bd288(&local_60,DAT_091a2f18);
        }
      }
      iVar3 = 1;
      goto LAB_0409384c;
    }
  }
  iVar3 = 0;
LAB_0409384c:
  if (*local_70 != '\0') {
    System_Threading_Monitor__Exit(*local_68,0);
  }
  if (local_78 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  if (iVar3 != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_040938c8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a58,0);
LAB_040938c8:
    (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  return iVar3;
}

