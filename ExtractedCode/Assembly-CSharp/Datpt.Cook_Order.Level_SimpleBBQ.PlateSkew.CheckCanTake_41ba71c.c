// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.PlateSkew$$CheckCanTake
// address: 0x41ba71c
// body: available
// range: 0x41ba71c-0x41ba8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ba880 to 0x41aed04 Datpt.Cook_Order.ItemMovingBase$$CheckCanTake (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Datpt_Cook_Order_Level_SimpleBBQ_PlateSkew__CheckCanTake(long param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09516964 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186bf0);
    FUN_03f5c2a4(&DAT_09186bf8);
    FUN_03f5c2a4(&DAT_09189018);
    FUN_03f5c2a4(&DAT_0918ad68);
    DAT_09516964 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar2 = Datpt_Cook_Order_Level_SimpleBBQ_PlateSkew__get_IsFullSkewer(param_1);
    if ((uVar2 & 1) == 0) goto LAB_041ba86c;
LAB_041ba85c:
    uVar3 = 0;
  }
  else {
    lVar4 = *param_2;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if ((((((bVar1 < *(byte *)(DAT_09186bf0 + 0x130)) ||
           (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09186bf0 + 0x130) * 8 + -8) !=
            DAT_09186bf0)) || (*(int *)(param_1 + 0xd8) < 1)) ||
         ((int)param_2[0x11] != *(int *)(param_1 + 200))) &&
        (((bVar1 < *(byte *)(DAT_09186bf8 + 0x130) ||
          (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09186bf8 + 0x130) * 8 + -8) !=
           DAT_09186bf8)) ||
         ((*(int *)(param_1 + 0xd8) < 1 ||
          (((int)param_2[0x11] != *(int *)(param_1 + 0xcc) || (*(char *)(param_1 + 0xe9) != '\0'))))
         )))) && ((bVar1 < *(byte *)(DAT_09189018 + 0x130) ||
                  (((*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09189018 + 0x130) * 8 +
                              -8) != DAT_09189018 || (*(int *)(param_1 + 0xd8) < 1)) ||
                   (*(char *)(param_1 + 0xe8) != '\0')))))) {
      uVar2 = Datpt_Cook_Order_Level_SimpleBBQ_PlateSkew__get_IsFullSkewer(param_1);
      if ((uVar2 & 1) != 0) goto LAB_041ba85c;
      if (param_2 == (long *)0x0) {
LAB_041ba86c:
        uVar3 = Datpt_Cook_Order_ItemMovingBase__CheckCanTake(param_1,param_2,0);
        return uVar3;
      }
      if (((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_0918ad68 + 0x130)) ||
          (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0918ad68 + 0x130) * 8 + -8) !=
           DAT_0918ad68)) || ((char)param_2[0x22] == '\0')) goto LAB_041ba86c;
    }
    uVar3 = 1;
  }
  return uVar3;
}

