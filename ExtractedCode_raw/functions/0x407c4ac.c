// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSpineSfxPlayer$$Play
// address: 0x407c4ac
// body: available
// range: 0x407c4ac-0x407c6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407c68c to 0x4d8dc1c FUN_04d8dc1c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407c6c8 to 0x4081850 CakeOrder.InGame.Pasta.PastaSpineSfxPlayer$$StartAudio (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407c6cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Play
               (float param_1,float param_2,float param_3,long param_4,undefined8 param_5)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09515c6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbc80);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091dc040);
    FUN_03f5c2a4(&DAT_091ee3c0);
    FUN_03f5c2a4(&DAT_09193228);
    DAT_09515c6c = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09193228);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar2 + 0x10) = param_4;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_4);
  puVar5 = (undefined8 *)(lVar2 + 0x18);
  *puVar5 = param_5;
  thunk_FUN_03f5d7b8(puVar5,param_5);
  CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__Stop(param_4);
  uVar4 = *puVar5;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar3 & 1) != 0) {
    fVar7 = 0.01;
    if (0.01 <= param_3) {
      fVar7 = param_3;
    }
    fVar6 = 0.0;
    if (0.0 <= param_2) {
      fVar6 = param_2;
    }
    *(float *)(param_4 + 0x38) = fVar7;
    fVar1 = 0.0;
    if (0.0 <= param_1) {
      fVar1 = param_1;
    }
    fVar6 = fVar6 - fVar1;
    if (fVar6 <= 0.0) {
      CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__StartAudio(-fVar6,param_4,*puVar5);
      return;
    }
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,lVar2,DAT_091ee3c0,0);
    uVar4 = DG_Tweening_DOVirtual__DelayedCall(fVar6 / fVar7,uVar4,1,0);
    uVar4 = FUN_04d9656c(uVar4,0,DAT_091dc040);
    uVar4 = FUN_04d9642c(uVar4,param_4,DAT_091dbfe0);
    puVar5 = (undefined8 *)(param_4 + 0x28);
    *puVar5 = uVar4;
    thunk_FUN_03f5d7b8(puVar5,uVar4);
    if (*(char *)(param_4 + 0x3c) != '\0') {
      FUN_04d8dc1c(*puVar5,DAT_091dbc80);
      return;
    }
  }
  return;
}

