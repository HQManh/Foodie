// rea decompile_all
// name: std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::get
// address: 0x400ab84
// body: available
// range: 0x400ab84-0x400b0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400b0dc to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, wchar_t const*,
   wchar_t const*) const */

long * __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::get
          (time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,long *param_3,undefined8 param_4,uint *param_5,undefined8 param_6,
          undefined4 *param_7,undefined4 *param_8)

{
  long *plVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long local_80;
  undefined1 *local_78;
  undefined1 ***local_70;
  undefined1 **local_68;
  
  ios_base::getloc();
  local_78 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_68 = &local_78;
    local_70 = &local_68;
    __call_once((ulong *)ctype<wchar_t>::id,&local_70,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)(int)ctype<wchar_t>::id._8_4_ - 1U) ||
     (plVar16 = *(long **)(*(long *)(local_80 + 0x10) +
                          ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8), plVar16 == (long *)0x0))
  {
    uVar12 = FUN_03ff9c28();
    locale::~locale((locale *)&local_80);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar12);
  }
  locale::~locale((locale *)&local_80);
  *param_5 = 0;
  plVar15 = param_3;
  if (param_7 != param_8) {
    while (param_2 != (long *)0x0) {
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        iVar10 = *(int *)param_2[3];
      }
      bVar3 = iVar10 == -1;
      plVar1 = (long *)0x0;
      if (!bVar3) {
        plVar1 = param_2;
      }
      param_2 = plVar1;
      if (plVar15 == (long *)0x0) goto LAB_0400ac6c;
LAB_0400ac94:
      if ((int *)plVar15[3] == (int *)plVar15[4]) {
        iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
        param_3 = (long *)0x0;
        if (iVar10 != -1) {
          param_3 = plVar15;
        }
        plVar15 = param_3;
        if (bVar3 != (iVar10 == -1)) goto LAB_0400ace0;
        goto LAB_0400aff4;
      }
      bVar4 = *(int *)plVar15[3] == -1;
      param_3 = (long *)0x0;
      if (!bVar4) {
        param_3 = plVar15;
      }
      plVar15 = param_3;
      if (bVar3 == bVar4) goto LAB_0400aff4;
LAB_0400ace0:
      cVar5 = (**(code **)(*plVar16 + 0x68))(plVar16,*param_7,0);
      param_3 = plVar15;
      if (cVar5 == '%') {
        if (param_7 + 1 == param_8) goto LAB_0400aff4;
        uVar6 = (**(code **)(*plVar16 + 0x68))(plVar16,param_7[1],0);
        if (((uVar6 & 0xff) == 0x45) || ((uVar6 & 0xff) == 0x30)) {
          if (param_7 + 2 == param_8) goto LAB_0400aff4;
          uVar7 = (**(code **)(*plVar16 + 0x68))(plVar16,param_7[2],0);
          lVar14 = 2;
          uVar13 = uVar6;
        }
        else {
          uVar13 = 0;
          lVar14 = 1;
          uVar7 = uVar6;
        }
        param_2 = (long *)(**(code **)(*(long *)this + 0x48))
                                    (this,param_2,plVar15,param_4,param_5,param_6,uVar7,uVar13);
        param_7 = param_7 + lVar14 + 1;
      }
      else {
        uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,1,*param_7);
        if ((uVar11 & 1) != 0) {
          do {
            param_7 = param_7 + 1;
            puVar2 = param_8;
            if (param_7 == param_8) break;
            uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,1,*param_7);
            puVar2 = param_7;
          } while ((uVar11 & 1) != 0);
          if (param_2 != (long *)0x0) goto LAB_0400ae48;
          do {
            bVar3 = true;
            while( true ) {
              param_7 = puVar2;
              if (plVar15 == (long *)0x0) {
                param_3 = plVar15;
                if (bVar3 != false) goto joined_r0x0400afec;
              }
              else {
                if ((int *)plVar15[3] == (int *)plVar15[4]) {
                  iVar10 = (**(code **)(*plVar15 + 0x48))(plVar15);
                }
                else {
                  iVar10 = *(int *)plVar15[3];
                }
                if (iVar10 == -1) {
                  plVar15 = (long *)0x0;
                }
                param_3 = plVar15;
                if (bVar3 == (iVar10 == -1)) goto joined_r0x0400afec;
              }
              if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
                uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
                uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,1,uVar8);
              }
              else {
                uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,1,*(undefined4 *)param_2[3]);
              }
              param_3 = plVar15;
              if ((uVar11 & 1) == 0) goto joined_r0x0400afec;
              if (param_2[3] == param_2[4]) {
                (**(code **)(*param_2 + 0x50))(param_2);
              }
              else {
                param_2[3] = param_2[3] + 4;
              }
              if (param_2 == (long *)0x0) break;
LAB_0400ae48:
              if ((int *)param_2[3] == (int *)param_2[4]) {
                iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              else {
                iVar10 = *(int *)param_2[3];
              }
              bVar3 = iVar10 == -1;
              if (bVar3) {
                param_2 = (long *)0x0;
              }
            }
          } while( true );
        }
        if ((undefined4 *)param_2[3] == (undefined4 *)param_2[4]) {
          uVar8 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        else {
          uVar8 = *(undefined4 *)param_2[3];
        }
        iVar10 = (**(code **)(*plVar16 + 0x38))(plVar16,uVar8);
        iVar9 = (**(code **)(*plVar16 + 0x38))(plVar16,*param_7);
        if (iVar10 == iVar9) {
          if (param_2[3] == param_2[4]) {
            (**(code **)(*param_2 + 0x50))(param_2);
          }
          else {
            param_2[3] = param_2[3] + 4;
          }
          param_7 = param_7 + 1;
        }
        else {
          *param_5 = 4;
        }
      }
joined_r0x0400afec:
      if ((param_7 == param_8) || (plVar15 = param_3, *param_5 != 0)) goto LAB_0400affc;
    }
    bVar3 = true;
    if (plVar15 != (long *)0x0) goto LAB_0400ac94;
LAB_0400ac6c:
    param_3 = plVar15;
    if (!bVar3) goto LAB_0400ace0;
LAB_0400aff4:
    *param_5 = 4;
  }
LAB_0400affc:
  if (param_2 == (long *)0x0) {
    bVar3 = true;
    plVar16 = (long *)0x0;
  }
  else {
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar10 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar10 = *(int *)param_2[3];
    }
    bVar3 = iVar10 == -1;
    plVar16 = (long *)0x0;
    if (!bVar3) {
      plVar16 = param_2;
    }
  }
  if (param_3 == (long *)0x0) {
    if (!bVar3) {
      return plVar16;
    }
  }
  else {
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar10 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar10 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar10 == -1)) {
      return plVar16;
    }
  }
  *param_5 = *param_5 | 2;
  return plVar16;
}

