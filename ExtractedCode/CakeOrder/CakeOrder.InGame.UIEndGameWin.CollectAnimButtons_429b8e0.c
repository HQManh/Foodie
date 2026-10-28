// rea decompile_all
// name: CakeOrder.InGame.UIEndGameWin$$CollectAnimButtons
// address: 0x429b8e0
// body: available
// range: 0x429b8e0-0x429bbc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429bbc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameWin__CollectAnimButtons(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *local_28;
  
  if ((DAT_095171fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5540);
    FUN_03f5c2a4(&DAT_091c5920);
    FUN_03f5c2a4(&DAT_09186148);
    FUN_03f5c2a4(&DAT_091b1280);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095171fe = 1;
  }
  local_28 = (long *)0x0;
  CakeOrder_InGame_UIEndGameBase__CollectAnimHeaderElements(param_1,param_2);
  uVar8 = *(undefined8 *)(param_1 + 0x160);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x160) == 0) goto LAB_0429bbc4;
    uVar3 = FUN_04a6b048(*(long *)(param_1 + 0x160),&local_28,DAT_091c5920);
    plVar2 = local_28;
    if ((uVar3 & 1) != 0) {
      if (local_28 == (long *)0x0) goto LAB_0429bbc4;
      lVar5 = *local_28;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09186148) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0429ba04;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_28,DAT_09186148,0);
LAB_0429ba04:
      uVar3 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      if ((uVar3 & 1) != 0) {
        if (((*(long *)(param_1 + 0x160) == 0) ||
            (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x160),0), lVar5 == 0
            )) || (UnityEngine_GameObject__SetActive(lVar5,1,0), lVar5 = DAT_091b1280, param_2 == 0)
           ) goto LAB_0429bbc4;
        lVar6 = *(long *)(param_2 + 0x10);
        uVar8 = *(undefined8 *)(param_1 + 0x160);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0429bbc4;
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(param_2,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
  if ((*(long *)(param_1 + 0x168) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x168),0), lVar5 != 0)) {
    UnityEngine_GameObject__SetActive(lVar5,1,0);
    if ((*(long *)(param_1 + 0x168) != 0) &&
       (uVar8 = FUN_04a6a14c(*(long *)(param_1 + 0x168),DAT_091c5540), lVar5 = DAT_091b1280,
       param_2 != 0)) {
      lVar6 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(param_2,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if ((*(long *)(param_1 + 0x178) != 0) &&
           (lVar5 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x178),0), lVar5 != 0)
           ) {
          UnityEngine_GameObject__SetActive(lVar5,*(undefined1 *)(param_1 + 0x1b8),0);
          if (*(char *)(param_1 + 0x1b8) == '\0') {
            return;
          }
          if (*(long *)(param_1 + 0x178) != 0) {
            uVar8 = FUN_04a6a14c(*(long *)(param_1 + 0x178),DAT_091c5540);
            lVar5 = DAT_091b1280;
            lVar6 = *(long *)(param_2 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(param_2 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                thunk_FUN_03f5d7b8();
                return;
              }
              FUN_057e0c68(param_2,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              return;
            }
          }
        }
      }
    }
  }
LAB_0429bbc4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

