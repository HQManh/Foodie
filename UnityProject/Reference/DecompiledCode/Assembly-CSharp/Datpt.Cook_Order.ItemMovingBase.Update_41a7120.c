// rea decompile_all
// name: Datpt.Cook_Order.ItemMovingBase$$CheckItemMovingMoveOverHightLight
// address: 0x41a7120
// body: available
// range: 0x41a7120-0x41a7123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ItemMovingBase__CheckItemMovingMoveOverHightLight
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if ((DAT_095168cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c53e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189078);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_092004e8);
    DAT_095168cd = 1;
  }
  if (*(char *)(param_3 + 0x80) == '\0') {
    return;
  }
  lVar2 = UnityEngine_Component__get_transform(param_3,0);
  if (lVar2 != 0) {
    uVar6 = UnityEngine_Transform__get_position(lVar2,0);
    lVar2 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar2 + 0x20) = DAT_092004e8;
      thunk_FUN_03f5d7b8();
      uVar1 = UnityEngine_LayerMask__GetMask(lVar2,0);
      if (*(int *)(DAT_09189078 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189078);
      }
      lVar2 = UnityEngine_Physics2D__OverlapCircle(uVar6,param_2,0x3e800000,uVar1,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
      if ((uVar3 & 1) == 0) {
        if (lVar2 != 0) {
          lVar2 = FUN_04a6a14c(lVar2,DAT_091c53e8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
          if ((uVar3 & 1) == 0) {
            *(long *)(param_3 + 0x78) = lVar2;
            thunk_FUN_03f5d7b8(param_3 + 0x78,lVar2);
            if (lVar2 != 0) {
              uVar4 = UnityEngine_Component__get_transform(lVar2,0);
              if (DAT_09515cf3 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515cf3 = '\x01';
              }
              uVar7 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
              DG_Tweening_ShortcutExtensions__DOScale
                        ((float)uVar7 * 1.2,(float)((ulong)uVar7 >> 0x20) * 1.2,
                         *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 1.2,0x3e4ccccd,uVar4,0)
              ;
              return;
            }
          }
          else {
            uVar4 = *(undefined8 *)(param_3 + 0x78);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            if (*(long *)(param_3 + 0x78) != 0) {
              uVar4 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x78),0);
              if (DAT_09515cf3 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515cf3 = '\x01';
              }
              lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
              DG_Tweening_ShortcutExtensions__DOScale
                        (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                         *(undefined4 *)(lVar2 + 0x14),0x3e4ccccd,uVar4,0);
              *(undefined8 *)(param_3 + 0x78) = 0;
              goto LAB_041ae06c;
            }
          }
        }
      }
      else {
        plVar5 = (long *)(param_3 + 0x78);
        lVar2 = *plVar5;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (*plVar5 != 0) {
          uVar4 = UnityEngine_Component__get_transform(*plVar5,0);
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
          DG_Tweening_ShortcutExtensions__DOScale
                    (*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                     *(undefined4 *)(lVar2 + 0x14),0x3e4ccccd,uVar4,0);
          *plVar5 = 0;
LAB_041ae06c:
          thunk_FUN_03f5d7b8(param_3 + 0x78,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

