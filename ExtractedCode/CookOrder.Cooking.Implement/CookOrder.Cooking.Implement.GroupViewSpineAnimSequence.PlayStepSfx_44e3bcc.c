// rea decompile_all
// name: CookOrder.Cooking.Implement.GroupViewSpineAnimSequence$$PlayStepSfx
// address: 0x44e3bcc
// body: available
// range: 0x44e3bcc-0x44e3eff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e3e9c to 0x44e4080 CookOrder.Cooking.Implement.GroupViewSpineAnimSequence$$PlayAt (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44e3ee0 to 0x4d8dc1c FUN_04d8dc1c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44e3efc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_GroupViewSpineAnimSequence__PlayStepSfx
               (float param_1,float param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_0951837a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_091b1148);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e0d0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc80);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091dc040);
    FUN_03f5c2a4(&DAT_091eaf98);
    FUN_03f5c2a4(&DAT_091eafa8);
    FUN_03f5c2a4(&DAT_09191170);
    FUN_03f5c2a4(&DAT_09191160);
    DAT_0951837a = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191170);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(lVar2 + 0x10);
    *puVar7 = param_4;
    thunk_FUN_03f5d7b8(puVar7,param_4);
    uVar6 = *puVar7;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    param_1 = *(float *)(param_3 + 0x68) * param_1;
    if (param_1 <= 0.01) {
      param_1 = 0.01;
    }
    *(float *)(lVar2 + 0x18) = param_1;
    if (param_2 <= 0.0) {
      CookOrder_Cooking_Implement_GroupViewSpineAnimSequence__PlayAt(param_1,*puVar7);
      return;
    }
    uVar6 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar6,lVar2,DAT_091eafa8,0);
    uVar6 = DG_Tweening_DOVirtual__DelayedCall(param_2 / param_1,uVar6,1,0);
    uVar6 = FUN_04d9656c(uVar6,0,DAT_091dc040);
    uVar6 = FUN_04d9642c(uVar6,param_3,DAT_091dbfe0);
    lVar2 = *(long *)(param_3 + 0x58);
    if (*(int *)(DAT_09191160 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09191160);
    }
    puVar7 = *(undefined8 **)(DAT_09191160 + 0xb8);
    lVar8 = puVar7[1];
    if (lVar8 == 0) {
      if (*(int *)(DAT_09191160 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09191160);
        puVar7 = *(undefined8 **)(DAT_09191160 + 0xb8);
      }
      uVar9 = *puVar7;
      lVar8 = thunk_FUN_03f9944c(DAT_0917e0d0);
      FUN_05d78cfc(lVar8,uVar9,DAT_091eaf98,0);
      plVar4 = (long *)(*(long *)(DAT_09191160 + 0xb8) + 8);
      *plVar4 = lVar8;
      thunk_FUN_03f5d7b8(plVar4,lVar8);
    }
    if (lVar2 != 0) {
      FUN_057e23b0(lVar2,lVar8,DAT_091b1148);
      lVar2 = DAT_091b1128;
      lVar8 = *(long *)(param_3 + 0x58);
      if (lVar8 != 0) {
        lVar5 = *(long *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = uVar6;
            thunk_FUN_03f5d7b8(puVar7,uVar6);
          }
          else {
            FUN_057e0c68(lVar8,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if (*(char *)(param_3 + 0x60) == '\0') {
            return;
          }
          FUN_04d8dc1c(uVar6,DAT_091dbc80);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

