// rea decompile_all
// name: Utilities.UIAnimShowHideControl.<IEShowWithLinkedUI>d__17$$MoveNext
// address: 0x4520acc
// body: available
// range: 0x4520acc-0x4520fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4520fbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4520fc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4520fc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_UIAnimShowHideControl_<IEShowWithLinkedUI>d__17__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  if ((DAT_095185be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4a60);
    FUN_03f5c2a4(&DAT_091a4a68);
    FUN_03f5c2a4(&DAT_091a4a70);
    FUN_03f5c2a4(&DAT_091b1280);
    FUN_03f5c2a4(&DAT_091b1290);
    FUN_03f5c2a4(&DAT_091b1298);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_095185be = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  plVar10 = *(long **)(param_1 + 0x28);
  uVar4 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar16 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar11 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(uVar16,uVar11,0);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar11);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar10 == (long *)0x0) goto LAB_04520fbc;
    lVar12 = plVar10[8];
    if ((lVar12 != 0) && (uVar2 = *(uint *)(lVar12 + 0x18), 0 < (int)uVar2)) {
      lVar13 = 0;
      do {
        if (uVar2 <= (uint)lVar13) {
LAB_04520fc0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558(uVar4);
        }
        lVar15 = *(long *)(lVar12 + 0x20 + lVar13 * 8);
        if (lVar15 == 0) goto LAB_04520fbc;
        uVar11 = *(undefined8 *)(lVar15 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
        if ((uVar4 & 1) != 0) {
          plVar5 = *(long **)(lVar15 + 0x10);
          if (plVar5 == (long *)0x0) goto LAB_04520fbc;
          uVar4 = (**(code **)(*plVar5 + 0x188))
                            (*(undefined4 *)(lVar15 + 0x18),plVar5,0,*(undefined8 *)(*plVar5 + 400))
          ;
          lVar3 = DAT_091b1280;
          if (*(char *)(lVar15 + 0x1c) != '\0') {
            lVar6 = plVar10[10];
            if (lVar6 == 0) goto LAB_04520fbc;
            lVar7 = *(long *)(lVar6 + 0x10);
            uVar11 = *(undefined8 *)(lVar15 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_04520fbc;
            uVar2 = *(uint *)(lVar6 + 0x18);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
              puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
              *puVar8 = uVar11;
              uVar4 = thunk_FUN_03f5d7b8(puVar8);
            }
            else {
              uVar4 = FUN_057e0c68(lVar6,uVar11,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                                  );
            }
          }
        }
        uVar2 = *(uint *)(lVar12 + 0x18);
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 < (int)uVar2);
    }
    uVar11 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    uVar11 = UnityEngine_MonoBehaviour__StartCoroutine(plVar10,uVar11,0);
    *(undefined8 *)(param_1 + 0x18) = uVar11;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar11);
    uVar16 = 2;
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar10 == (long *)0x0) goto LAB_04520fbc;
      lVar12 = plVar10[6];
      if ((lVar12 != 0) && (0 < (int)*(ulong *)(lVar12 + 0x18))) {
        uVar14 = 0;
        uVar9 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar14) goto LAB_04520fc0;
          lVar13 = *(long *)(lVar12 + 0x20 + uVar14 * 8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(lVar13,0);
          if ((uVar4 & 1) != 0) {
            if (lVar13 == 0) goto LAB_04520fbc;
            uVar4 = UnityEngine_Behaviour__set_enabled(lVar13,1,0);
          }
          uVar9 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)*(uint *)(lVar12 + 0x18));
      }
      lVar12 = plVar10[9];
      if ((lVar12 != 0) && (uVar2 = *(uint *)(lVar12 + 0x18), 0 < (int)uVar2)) {
        lVar13 = 0;
        do {
          if (uVar2 <= (uint)lVar13) goto LAB_04520fc0;
          lVar15 = *(long *)(lVar12 + 0x20 + lVar13 * 8);
          if (lVar15 == 0) goto LAB_04520fbc;
          uVar11 = *(undefined8 *)(lVar15 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar11,0);
          if ((uVar4 & 1) != 0) {
            plVar5 = *(long **)(lVar15 + 0x10);
            if (plVar5 == (long *)0x0) goto LAB_04520fbc;
            uVar4 = (**(code **)(*plVar5 + 0x188))
                              (*(undefined4 *)(lVar15 + 0x18),plVar5,0,
                               *(undefined8 *)(*plVar5 + 400));
            lVar3 = DAT_091b1280;
            if (*(char *)(lVar15 + 0x1c) != '\0') {
              lVar6 = plVar10[10];
              if (lVar6 == 0) goto LAB_04520fbc;
              lVar7 = *(long *)(lVar6 + 0x10);
              uVar11 = *(undefined8 *)(lVar15 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_04520fbc;
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                *puVar8 = uVar11;
                uVar4 = thunk_FUN_03f5d7b8(puVar8);
              }
              else {
                uVar4 = FUN_057e0c68(lVar6,uVar11,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          uVar2 = *(uint *)(lVar12 + 0x18);
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < (int)uVar2);
      }
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
    else {
      if (iVar1 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(char *)(param_1 + 0x38) != '\0') {
        if ((plVar10 != (long *)0x0) && (lVar12 = plVar10[10], lVar12 != 0)) {
          iVar1 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar1) {
            System_Array__Clear(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
          }
          plVar10[5] = 0;
          *(undefined4 *)(plVar10 + 4) = 2;
          thunk_FUN_03f5d7b8(plVar10 + 5,0);
          lVar12 = *(long *)(param_1 + 0x30);
          if (lVar12 != 0) {
            (**(code **)(lVar12 + 0x18))
                      (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
          }
          return 0;
        }
        goto LAB_04520fbc;
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
    if ((plVar10 == (long *)0x0) || (plVar10[10] == 0)) {
LAB_04520fbc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_78,plVar10[10],DAT_091b1298);
    do {
      uVar4 = FUN_071bd28c(&local_78,DAT_091a4a68);
      if ((uVar4 & 1) == 0) goto LAB_04520f6c;
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (*(int *)(local_68 + 0x20) == 2);
    *(undefined1 *)(param_1 + 0x38) = 0;
LAB_04520f6c:
    FUN_071bd288(&local_78,DAT_091a4a60);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar16 = 3;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar16;
  return 1;
}

