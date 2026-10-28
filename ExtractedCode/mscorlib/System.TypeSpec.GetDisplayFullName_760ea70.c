// rea decompile_all
// name: System.TypeSpec$$GetDisplayFullName
// address: 0x760ea70
// body: available
// range: 0x760ea70-0x760ee37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760eda4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760ee2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760ee30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760ee34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TypeSpec__GetDisplayFullName(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  undefined8 local_88;
  undefined8 *puStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long *local_60;
  
  if ((DAT_09522041 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4a30);
    FUN_03f5c2a4(&DAT_091a4a38);
    FUN_03f5c2a4(&DAT_091a4a40);
    FUN_03f5c2a4(&DAT_091b1230);
    FUN_03f5c2a4(&DAT_091b1268);
    FUN_03f5c2a4(&DAT_091b1270);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918c2a0);
    FUN_03f5c2a4(&DAT_091f86e8);
    DAT_09522041 = 1;
  }
  plVar8 = *(long **)(param_1 + 0x10);
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0918c2a0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0760eb7c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0918c2a0,0);
LAB_0760eb7c:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    plVar8 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar8,uVar3,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_057e185c(&local_88,*(long *)(param_1 + 0x20),DAT_091b1230);
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar6 = FUN_071bd28c(&local_70,DAT_091a4a38), plVar1 = local_60, (uVar6 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = System_Text_StringBuilder__Append(plVar8,0x2b,0);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0918c2a0) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0760ec68;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0918c2a0,0);
LAB_0760ec68:
        uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar3,uVar3);
        }
        System_Text_StringBuilder__Append(lVar4,uVar3,0);
      }
      FUN_071bd288(&local_70,DAT_091a4a30);
    }
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_0760edb8:
      if ((param_2 >> 1 & 1) == 0) {
        System_TypeSpec__GetModifierString(param_1,plVar8);
      }
      if (((param_2 & 1) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
        if (plVar8 != (long *)0x0) goto LAB_0760ee00;
      }
      else if ((plVar8 != (long *)0x0) &&
              (lVar4 = System_Text_StringBuilder__Append(plVar8,DAT_091f86e8,0), lVar4 != 0)) {
        System_Text_StringBuilder__Append(lVar4,*(undefined8 *)(param_1 + 0x18),0);
LAB_0760ee00:
        (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        return;
      }
    }
    else if (plVar8 != (long *)0x0) {
      System_Text_StringBuilder__Append(plVar8,0x5b,0);
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        iVar9 = 0;
        do {
          if (*(int *)(lVar4 + 0x18) <= iVar9) {
            System_Text_StringBuilder__Append(plVar8,0x5d,0);
            goto LAB_0760edb8;
          }
          if (iVar9 != 0) {
            System_Text_StringBuilder__Append(plVar8,DAT_091f86e8,0);
            lVar4 = *(long *)(param_1 + 0x28);
            if (lVar4 == 0) break;
          }
          lVar4 = FUN_057e0998(lVar4,iVar9,DAT_091b1270);
          if (lVar4 == 0) break;
          if (*(long *)(lVar4 + 0x18) == 0) {
            if ((*(long *)(param_1 + 0x28) == 0) ||
               (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x28),iVar9,DAT_091b1270), lVar4 == 0))
            break;
            uVar3 = System_TypeSpec__get_DisplayFullName();
            System_Text_StringBuilder__Append(plVar8,uVar3,0);
          }
          else {
            lVar4 = System_Text_StringBuilder__Append(plVar8,0x5b,0);
            if ((((*(long *)(param_1 + 0x28) == 0) ||
                 (lVar5 = FUN_057e0998(*(long *)(param_1 + 0x28),iVar9,DAT_091b1270), lVar5 == 0))
                || (uVar3 = System_TypeSpec__get_DisplayFullName(), lVar4 == 0)) ||
               (lVar4 = System_Text_StringBuilder__Append(lVar4,uVar3,0), lVar4 == 0)) break;
            System_Text_StringBuilder__Append(lVar4,0x5d,0);
          }
          lVar4 = *(long *)(param_1 + 0x28);
          iVar9 = iVar9 + 1;
          if (lVar4 == 0) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

