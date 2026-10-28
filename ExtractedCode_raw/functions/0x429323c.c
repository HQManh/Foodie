// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$RefreshAutoplayButton
// address: 0x429323c
// body: available
// range: 0x429323c-0x42935c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42935c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__RefreshAutoplayButton(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_34;
  
  if ((DAT_095171dc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09185650);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c338);
    FUN_03f5c2a4(&DAT_091fc520);
    FUN_03f5c2a4(&DAT_091fc528);
    FUN_03f5c2a4(&DAT_091f5cb0);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095171dc = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x1e0);
  lVar9 = *(long *)(*(long *)(DAT_0918c338 + 0xb8) + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x1e0) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x1e0),0), lVar3 == 0))
    goto LAB_042935c4;
    UnityEngine_GameObject__SetActive(lVar3,lVar9 != 0,0);
    uVar7 = *(undefined8 *)(param_1 + 0x1e8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar2 & 1) != 0) {
      if (lVar9 == 0) {
        bVar1 = true;
      }
      else {
        plVar8 = *(long **)(*(long *)(DAT_0918c338 + 0xb8) + 0x18);
        if (plVar8 == (long *)0x0) goto LAB_042935c4;
        lVar3 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185650) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_042933cc;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185650,0);
LAB_042933cc:
        uVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_09516604 == '\0') {
            FUN_03f5c2a4(&DAT_09182cc0);
            DAT_09516604 = '\x01';
          }
          if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar1 = *(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 9) == '\0';
        }
        else {
          bVar1 = false;
        }
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09516604 == '\0') {
        FUN_03f5c2a4(&DAT_09182cc0);
        DAT_09516604 = '\x01';
      }
      if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = DAT_091f5700;
      if (*(char *)(*(long *)(DAT_09182cc0 + 0xb8) + 9) != '\0') {
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09516606 == '\0') {
          FUN_03f5c2a4(&DAT_09182cc0);
          DAT_09516606 = '\x01';
        }
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_34 = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0xc);
        uVar7 = FUN_03f5c42c(DAT_09535420,&local_34);
        uVar7 = System_String__Format(DAT_091f5cb0,uVar7,0);
      }
      plVar8 = *(long **)(param_1 + 0x1e8);
      uVar5 = DAT_091fc520;
      if (!bVar1) {
        uVar5 = System_String__Concat(DAT_091fc528,uVar7,0);
      }
      if (plVar8 == (long *)0x0) goto LAB_042935c4;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x560));
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x1f0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x1f0) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x1f0),0), lVar3 == 0)) {
LAB_042935c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar3,lVar9 != 0,0);
  }
  return;
}

