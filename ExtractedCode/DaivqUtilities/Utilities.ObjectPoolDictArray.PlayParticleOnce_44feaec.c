// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$PlayParticleOnce
// address: 0x44feaec
// body: available
// range: 0x44feaec-0x44fec7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44fec78 to 0x86f45a8 UnityEngine.ParticleSystem$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44fec7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ObjectPoolDictArray__PlayParticleOnce
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7,float param_8,undefined8 param_9,long param_10
               )

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_0951848d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd9e0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951848d = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_10,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (param_10 == 0) goto LAB_044fec7c;
  uVar2 = UnityEngine_Component__get_gameObject(param_10,0);
  lVar3 = Utilities_ObjectPoolDictArray__GetGameObject
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,uVar2,0);
  if (param_8 <= 0.0) {
    if (lVar3 == 0) goto LAB_044fec7c;
  }
  else {
    if (lVar3 == 0) goto LAB_044fec7c;
    lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
    lVar5 = UnityEngine_Component__get_transform(param_10,0);
    if ((lVar5 == 0) || (fVar6 = (float)UnityEngine_Transform__get_localScale(lVar5,0), lVar4 == 0))
    goto LAB_044fec7c;
    UnityEngine_Transform__set_localScale
              (fVar6 * param_8,param_2 * param_8,param_3 * param_8,lVar4,0);
  }
  lVar3 = FUN_04b7c324(lVar3,DAT_091cd9e0);
  if (lVar3 != 0) {
    UnityEngine_ParticleSystem__Play(lVar3,0);
    return;
  }
LAB_044fec7c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

