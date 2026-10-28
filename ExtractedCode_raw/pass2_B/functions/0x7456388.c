// rea decompile_all
// name: System.Security.SecurityElement$$ToXml
// address: 0x7456388
// body: available
// range: 0x7456388-0x7456963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74565f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745682c to 0x743e010 System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7456948 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745694c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7456950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7456954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7456958 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7456960 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074568c4) */
/* WARNING: Removing unreachable block (ram,0x0745695c) */

void System_Security_SecurityElement__ToXml(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_09521125 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09194390);
    FUN_03f5c2a4(&DAT_0918a7f0);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091facd0);
    FUN_03f5c2a4(&DAT_091fa158);
    FUN_03f5c2a4(&DAT_091f6d50);
    FUN_03f5c2a4(&DAT_091fa1a8);
    FUN_03f5c2a4(&DAT_091fad68);
    FUN_03f5c2a4(&DAT_091f9420);
    DAT_09521125 = 1;
  }
  if (*param_2 == 0) goto LAB_074565f4;
  System_Text_StringBuilder__Append(*param_2,DAT_091fa158,0);
  if (*param_2 == 0) goto LAB_074565f4;
  System_Text_StringBuilder__Append(*param_2,*(undefined8 *)(param_1 + 0x18),0);
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*param_2 != 0) {
      System_Text_StringBuilder__Append(*param_2,DAT_091f5a98,0);
      plVar3 = *(long **)(param_1 + 0x20);
      if (plVar3 != (long *)0x0) {
        iVar2 = 0;
        while( true ) {
          iVar1 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          if (iVar1 <= iVar2) goto LAB_074565f8;
          plVar3 = *(long **)(param_1 + 0x20);
          if ((plVar3 == (long *)0x0) ||
             (plVar3 = (long *)(**(code **)(*plVar3 + 0x2e8))
                                         (plVar3,iVar2,*(undefined8 *)(*plVar3 + 0x2f0)),
             plVar3 == (long *)0x0)) break;
          if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_09194390 + 0x130)) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09194390 + 0x130) * 8 + -8)
              != DAT_09194390)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar3);
          }
          if ((*param_2 == 0) ||
             (lVar4 = System_Text_StringBuilder__Append(*param_2,plVar3[2],0), lVar4 == 0)) break;
          lVar4 = System_Text_StringBuilder__Append(lVar4,DAT_091facd0,0);
          lVar10 = plVar3[3];
          if (*(int *)(DAT_0918a7f0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918a7f0);
          }
          uVar5 = System_Security_SecurityElement__Escape(lVar10);
          if ((lVar4 == 0) || (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar5,0), lVar4 == 0)
             ) break;
          System_Text_StringBuilder__Append(lVar4,DAT_091f6d50,0);
          plVar3 = *(long **)(param_1 + 0x20);
          if (plVar3 == (long *)0x0) break;
          iVar1 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          if (iVar2 != iVar1 + -1) {
            lVar4 = *param_2;
            uVar5 = System_Environment__get_NewLine(0);
            if (lVar4 == 0) break;
            System_Text_StringBuilder__Append(lVar4,uVar5,0);
          }
          plVar3 = *(long **)(param_1 + 0x20);
          iVar2 = iVar2 + 1;
          if (plVar3 == (long *)0x0) break;
        }
      }
    }
    goto LAB_074565f4;
  }
LAB_074565f8:
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (uVar6 = System_String__op_Equality
                         (*(long *)(param_1 + 0x10),**(undefined8 **)(DAT_09535468 + 0xb8),0),
      (uVar6 & 1) != 0)) &&
     ((plVar3 = *(long **)(param_1 + 0x28), plVar3 == (long *)0x0 ||
      (iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0)), iVar2 == 0))
     )) {
    if (*param_2 != 0) {
      lVar4 = System_Text_StringBuilder__Append(*param_2,DAT_091f9420,0);
      uVar5 = System_Environment__get_NewLine(0);
      if (lVar4 != 0) {
        System_Text_StringBuilder__Append(lVar4,uVar5,0);
        return;
      }
    }
    goto LAB_074565f4;
  }
  if (*param_2 == 0) goto LAB_074565f4;
  lVar4 = System_Text_StringBuilder__Append(*param_2,DAT_091fad68,0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_0918a7f0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918a7f0);
  }
  uVar5 = System_Security_SecurityElement__Escape(uVar5);
  if (lVar4 == 0) goto LAB_074565f4;
  System_Text_StringBuilder__Append(lVar4,uVar5,0);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = *param_2;
    uVar5 = System_Environment__get_NewLine(0);
    if (lVar4 != 0) {
      System_Text_StringBuilder__Append(lVar4,uVar5,0);
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
        do {
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07456740;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07456740:
          uVar6 = (*(code *)*puVar7)(plVar3,puVar7[1]);
          if ((uVar6 & 1) == 0) {
            plVar3 = (long *)thunk_FUN_03f99350(plVar3,DAT_09185a58);
            if (plVar3 == (long *)0x0) goto LAB_074568c8;
            lVar4 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 == 0) goto LAB_07456890;
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_07456878;
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_074567a8;
              }
              uVar6 = uVar6 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,1);
LAB_074567a8:
          plVar8 = (long *)(*(code *)*puVar7)(plVar3,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*plVar8 != DAT_0918a7f0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          System_Security_SecurityElement__ToXml(plVar8,param_2,param_3 + 1);
        } while( true );
      }
    }
    goto LAB_074565f4;
  }
  goto LAB_074568c8;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar9 = piVar9 + 4;
    if (uVar6 == 0) break;
LAB_07456878:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_074568ac;
    }
  }
LAB_07456890:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_074568ac:
  (*(code *)*puVar7)(plVar3,puVar7[1]);
LAB_074568c8:
  if (((*param_2 != 0) &&
      (lVar4 = System_Text_StringBuilder__Append(*param_2,DAT_091fa1a8,0), lVar4 != 0)) &&
     (lVar4 = System_Text_StringBuilder__Append(lVar4,*(undefined8 *)(param_1 + 0x18),0), lVar4 != 0
     )) {
    lVar4 = System_Text_StringBuilder__Append(lVar4,DAT_091fad68,0);
    uVar5 = System_Environment__get_NewLine(0);
    if (lVar4 != 0) {
      System_Text_StringBuilder__Append(lVar4,uVar5,0);
      return;
    }
  }
LAB_074565f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

